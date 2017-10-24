/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:51:43 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 13:30:14 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_type_c(t_env *e, char s)
{
	if (!s)
		write(1, "\0", 1);
	else
		/*ft_putchar(s);*/ft_print_color_c(e, s);
}

static void	ft_width_zero(t_env *e, char s)
{
	ft_print_type_c(e, s);
	g_len++;
}

static void	ft_print_c(t_env *e, char s, char c)
{
	if (e->width == 0 && e->precision == 0)
		ft_width_zero(e, s);
	else if (e->width)
	{
		if (e->min)
		{
			ft_print_type_c(e, s);
			ft_write_char(e, e->width - 1, c);
			g_len += e->width;
		}
		else
		{
			ft_write_char(e, e->width - 1, c);
			ft_print_type_c(e, s);
			g_len += e->width;
		}
	}
	else if (e->width == 0 && e->precision > 0)
		ft_width_zero(e, s);
}

void		print_c(t_env *e, void *data)
{
	char	s;
	char	c;

	if (e->min)
		e->zero = 0;
	s = (char)data;
	c = e->zero ? '0' : ' ';
	if (e->precision == -1)
		e->precision = 0;
	if (!s)
		s = '\0';
	ft_print_c(e, s, c);
}
