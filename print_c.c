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

static void	ft_width_zero(char s)
{
	ft_putchar(s);
	g_len++;
}

static void	ft_print_c(t_env *e, char s, char c)
{
	if (e->width == 0 && e->precision == 0)
		ft_width_zero(s);
	else if (e->width)
	{
		if (e->min)
		{
			ft_putchar(s);
			ft_write_char(e->width - 1, c);
			g_len += e->width;
		}
		else
		{
			ft_write_char(e->width - 1, c);
			ft_putchar(s);
			g_len += e->width;
		}
	}
	else if (e->width == 0 && e->precision > 0)
		ft_width_zero(s);
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
		s = 0;
	ft_print_c(e, s, c);
}
