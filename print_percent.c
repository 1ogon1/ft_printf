/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:52:37 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/13 16:52:39 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_write_pres_percent(int i)
{
	while (i)
	{
		ft_putchar(' ');
		i--;
	}
}

static void	ft_print_percentp2(t_env *e, int i, char c, char h)
{
	if (e->precision == 0)
	{
		if (e->width > 0)
			ft_write_char(e, i, h);
		ft_putchar(e->q);
	}
	if (e->precision > 0)
	{
		if (e->width > 0)
			ft_write_char(e, i, h);
	}
	if (e->precision > 1)
	{
		ft_write_pres_percent(e->precision - 1);
		if (e->width <= e->precision)
			g_len += e->precision - 1;
	}
	ft_putchar(c);
}

static void	ft_print_percent(t_env *e, int i, char c, char h)
{
	if (e->min)
	{
		ft_putchar(c);
		if (e->precision > 1)
		{
			ft_write_pres_percent(e->precision - 1);
			if (e->width <= e->precision)
				g_len += e->precision - 1;
		}
		if (e->width > 0)
			ft_write_char(e, i, ' ');
	}
	else
		ft_print_percentp2(e, i, c, h);
}

void		print_percent(t_env *e, char c)
{
	int		r;
	int		i;
	char	h;

	r = 0;
	i = 0;
	if (e->precision > 0)
		e->zero = 0;
	g_len++;
	if (e->precision > 1)
		r = e->precision - 1;
	if (e->width > (1 + r))
	{
		i = e->width - (1 + r);
		g_len += i + r;
	}
	h = e->zero ? '0' : ' ';
	ft_print_percent(e, i, c, h);
}
