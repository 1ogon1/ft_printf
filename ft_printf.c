/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:50:47 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/17 16:03:08 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print(t_env *e, void *data, char **format, va_list *ap)
{
	if (e->type)
	{
		if (e->type == 's')
			print_s(e, data);
		else if (e->type == 'c' || e->type == 'C')
			print_c(e, data);
		else if (e->type == 'S')
			print_ss(e, data);
		else if (e->type == 'p')
			print_p(e, data, 0);
		else if (e->type == 'd' || e->type == 'i' || e->type == 'D')
			print_id(e, data, 0);
		else if (e->type == 'o' || e->type == 'O')
			print_o(e, data, 0);
		else if (e->type == 'u' || e->type == 'U')
			print_u(e, data, 0);
		else if (e->type == 'x' || e->type == 'X')
			print_x(e, data, 0);
		else if (e->type == '%')
			print_percent(e, '%');
		else if (e->type == 'n')
			print_n(data);
	}
	else
		ft_notype(e, format);
}

int			ft_printf(char *format, ...)
{
	void	*data;
	va_list	ap;
	t_env	e;

	data = NULL;
	g_len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format)
			{
				ft_check(&format, &e);
				if (e.type != '%' && e.type)
					data = va_arg(ap, void *);
				print(&e, data, &format, &ap);
			}
		}
		else
			format_print(&e, &format);
	}
	va_end(ap);
	return (g_len);
}
