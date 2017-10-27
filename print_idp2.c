/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_idp2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:52:01 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 13:30:49 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_color_c(t_env *e, char c)
{
	if (e->color == 1)
	{
		ft_putstr("\x1b[31m");
		ft_putchar(c);
		ft_putstr("\x1b[0m");
	}
	else if (e->color == 2)
	{
		ft_putstr("\x1b[92m");
		ft_putchar(c);
		ft_putstr("\x1b[0m");
	}
	else if (e->color == 3)
	{
		ft_putstr("\x1b[34m");
		ft_putchar(c);
		ft_putstr("\x1b[0m");
	}
	else
		ft_putchar(c);
}

void	ft_print_color(t_env *e, char *str)
{
	if (e->color == 1)
	{
		ft_putstr("\x1b[31m");
		ft_putstr(str);
		ft_putstr("\x1b[0m");
	}
	else if (e->color == 2)
	{
		ft_putstr("\x1b[92m");
		ft_putstr(str);
		ft_putstr("\x1b[0m");
	}
	else if (e->color == 3)
	{
		ft_putstr("\x1b[34m");
		ft_putstr(str);
		ft_putstr("\x1b[0m");
	}
	else
		ft_putstr(str);
}

void	ft_setp2(t_env *e, char *s, int i, char c)
{
	if (e->precision == 0)
		ft_precision(e, s, i, c);
	if (e->precision > 0)
	{
		if (e->width > 0)
			ft_write_char(e, i, c);
		if ((e->plus == 1 || e->space == 1) && s[0] != '-')
		{
			ft_print_color_c(e, e->q);
			g_len++;
		}
	}
	if (e->precision > ft_strlen(s))
	{
		ft_write_pres(e, e->precision - ft_strlen(s));
		if (e->width <= e->precision)
			g_len += e->precision - ft_strlen(s);
	}
	ft_print_color(e, s);
}

void	print_idp2(t_env *e, int r, char *s)
{
	int		i;
	int		len;
	char	c;

	i = 0;
	len = s[0] == '-' && e->min == 1 ? ft_strlen(s) - 1 : ft_strlen(s);
	if (e->precision > len)
		r = e->precision - len;
	c = e->zero ? '0' : ' ';
	if (e->width > (len + r))
	{
		i = e->width - (len + r);
		if ((e->plus || e->space) && s[0] != '-')
			i--;
		g_len += i + r;
	}
	if (s[0] == '-')
		ft_minset(e, s, i, c);
	else
		ft_set(e, s, i, c);
}

void	format_print(t_env *e, char **format)
{
	if (**format == '{')
		ft_check_color(e, format);
	else
	{
		if (e->color)
		{
			ft_print_color_c(e, **format);
			g_len++;
			(*format)++;
		}
		else
		{
			ft_putchar(**format);
			g_len++;
			(*format)++;
		}
	}
}
