/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_mid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:52:12 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 13:31:48 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_costil(t_env *e, char *s, int i, char c)
{
	if (e->precision > ft_strlen(s))
	{
		if (e->width > ft_strlen(s) + 1)
			ft_write_char(e, i - 1, c);
		ft_print_color_c(e, '-');
	}
	else if (e->precision <= ft_strlen(s))
	{
		if (e->width > ft_strlen(s) + 1)
			ft_write_char(e, i, c);
		ft_print_color_c(e, '-');
	}
}

static void	ft_precisionn(t_env *e, char *s, int i, char c)
{
	if ((e->plus == 1 || e->space == 1) && s[0] != '-')
	{
		if (e->zero == 1)
		{
			ft_print_color_c(e, e->q);
			if (e->width > 0)
				ft_write_char(e, i, c);
		}
		else
		{
			if (e->width > 0)
				ft_write_char(e, i, c);
			ft_print_color_c(e, e->q);
		}
	}
	else
	{
		if (e->width > 0)
			ft_write_char(e, i, c);
		ft_print_color_c(e, e->q);
	}
}

static void	ft_nomin(t_env *e, char *s, int i, char c)
{
	if (e->precision == 0)
	{
		if (e->zero)
		{
			ft_print_color_c(e, '-');
			ft_precisionn(e, s, i, c);
		}
		if (!e->zero)
		{
			ft_precisionn(e, s, i, c);
			ft_print_color_c(e, '-');
		}
	}
	if (e->precision > 0)
		ft_costil(e, s, i, c);
	if (e->precision > ft_strlen(s))
	{
		ft_write_pres(e, e->precision - (ft_strlen(s)));
		if (e->width <= e->precision)
			g_len += e->precision - ft_strlen(s);
	}
}

void		ft_minset(t_env *e, char *s, int i, char c)
{
	if (s[0] == '-')
		s++;
	if (e->min)
	{
		ft_print_color_c(e, '-');
		if (e->precision > ft_strlen(s))
		{
			ft_write_pres(e, e->precision - ft_strlen(s));
			if (e->width <= e->precision)
				g_len += e->precision - (ft_strlen(s) - 1);
		}
		ft_print_color(e, s);
		if (e->width > 0)
			ft_write_char(e, i - 1, ' ');
	}
	else
	{
		ft_nomin(e, s, i, c);
		ft_print_color(e, s);
	}
}
