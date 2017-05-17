/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:52:28 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/17 16:03:52 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_null_p(t_env *e)
{
	if (e->min)
	{
		ft_putstr("0x");
		if (e->width > 0)
			ft_write_char(e->width - 2, ' ');
		if (e->width > 2)
			g_len += e->width - 2;
	}
	else
	{
		if (e->width > 0)
			ft_write_char(e->width - 2, ' ');
		if (e->width > 2)
			g_len += e->width - 2;
		ft_putstr("0x");
	}
}

static void	ft_no_min_p(t_env *e, char *s, int i, char c)
{
	if (e->zero)
	{
		ft_putstr("0x");
		if (e->width > 0)
			ft_write_char(i, c);
	}
	if (!e->zero)
	{
		if (e->width > 0)
			ft_write_char(i, c);
		ft_putstr("0x");
	}
	if (e->precision > ft_strlen(s))
	{
		ft_write_pres(e->precision - ft_strlen(s));
		if (e->width <= e->precision)
			g_len += e->precision - ft_strlen(s);
	}
	ft_putstr(s);
}

static void	ft_set_p(t_env *e, char *s, int i, char c)
{
	if (e->min)
	{
		ft_putstr("0x");
		if (e->precision > ft_strlen(s))
		{
			ft_write_pres(e->precision - ft_strlen(s));
			if (e->width <= e->precision)
				g_len += e->precision - ft_strlen(s);
		}
		ft_putstr(s);
		if (e->width > 0)
			ft_write_char(i, c);
	}
	else
		ft_no_min_p(e, s, i, c);
}

static void	printp2_p(t_env *e, char *s, int r, char c)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	g_len += len;
	if (e->width >= (len + r + 2))
	{
		i = e->width - (len + r + 2);
		g_len += i + r;
	}
	ft_set_p(e, s, i, c);
}

void		print_p(t_env *e, void *data, int r)
{
	char	*s;
	char	c;

	s = ft_itoa_long_lg_low((unsigned long long int)data, 16);
	g_len += 2;
	if (e->precision == -1 && ft_strcmp(s, "0") == 0)
	{
		ft_null_p(e);
		return ;
	}
	else if (e->precision == -1 && ft_strcmp(s, "0") != 0)
		e->precision = 0;
	if (e->precision > 0 || e->min)
		e->zero = 0;
	if (e->precision >= ft_strlen(s))
		r = e->precision - ft_strlen(s);
	c = e->zero ? '0' : ' ';
	printp2_p(e, s, r, c);
	free(s);
}
