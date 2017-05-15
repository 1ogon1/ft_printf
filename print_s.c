/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:52:48 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 10:28:53 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_2(t_env *e, char *s, char c)
{
	if (e->min)
	{
		if (e->width > ft_strlen(s))
		{
			ft_putstr(s);
			ft_write_char(e->width - ft_strlen(s), c);
			g_len += ft_strlen(s) + (e->width - ft_strlen(s));
		}
		else
		{
			if (e->precision > ft_strlen(s))
			{
				ft_putstr(s);
				g_len += ft_strlen(s);
			}
			else if (e->precision < ft_strlen(s))
			{
				ft_write(s, e->precision);
				g_len += e->precision;
			}
		}
	}
	else
		ft_one(e, s, c);
}

static void	ft_radi_normi_v2(t_env *e, char *s)
{
	g_len += ft_strlen(s) + (e->precision - ft_strlen(s)) +
			(e->width - e->precision);
}

void		ft_print(t_env *e, char c, char *s)
{
	if (e->precision == 0 || e->width == 0)
		ft_three(e, s, c);
	else if (e->width > e->precision)
	{
		if (e->min)
		{
			if (e->precision > ft_strlen(s))
			{
				ft_putstr(s);
				ft_write_char(e->precision - ft_strlen(s), c);
				ft_write_char(e->width - e->precision, ' ');
				ft_radi_normi_v2(e, s);
			}
			else if (e->precision < ft_strlen(s))
			{
				ft_write(s, e->precision);
				ft_write_char(e->width - e->precision, ' ');
				g_len += e->precision + (e->width - e->precision);
			}
		}
		else
			ft_two(e, s, c);
	}
	else if (e->width < e->precision)
		ft_print_2(e, s, c);
}

void		print_s(t_env *e, void *data)
{
	char	*s;
	char	c;

	if (ft_strcmp(e->mod, "l") == 0)
	{
		print_ss(data);
		return ;
	}
	if (e->min)
		e->zero = 0;
	s = (char *)data;
	c = e->zero ? '0' : ' ';
	if (e->precision == -1)
	{
		if (e->width > 0)
			ft_write_char(e->width, c);
		g_len += e->width;
		return ;
	}
	print_sp2(e, s);
}
