/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oO.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:52:21 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 12:03:08 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_min_o(t_env *e, char *s, int i)
{
	if (e->hash == 1 && ft_strcmp(s, "0") != 0)
		ft_putstr("0");
	if (e->precision > ft_strlen(s))
	{
		ft_write_pres(e->precision - ft_strlen(s));
		if (e->width <= e->precision)
			g_len += e->precision - ft_strlen(s);
	}
	ft_putstr(s);
	if (e->width > 0)
		ft_write_char(i, ' ');
}

static void	ft_set_print_o(t_env *e, char *s, int i, char c)
{
	if (e->min)
		ft_min_o(e, s, i);
	else
	{
		if (e->zero)
		{
			if (e->hash == 1 && ft_strcmp(s, "0") != 0)
				ft_putstr("0");
			if (e->width > 0)
				ft_write_char(i, c);
		}
		if (!e->zero)
		{
			if (e->width > 0)
				ft_write_char(i, c);
			if (e->hash == 1 && ft_strcmp(s, "0") != 0)
				ft_putstr("0");
		}
		if (e->precision > ft_strlen(s))
		{
			ft_write_pres(e->precision - ft_strlen(s));
			if (e->width <= e->precision)
				g_len += e->precision - ft_strlen(s);
		}
	}
}

static void	ft_print_op2(t_env *e, char *s, int r)
{
	int		i;
	char	c;

	i = 0;
	if (e->precision == -1 && ft_strcmp(s, "0") != 0)
		e->precision = 0;
	if (e->precision > 0)
		e->zero = 0;
	if (e->precision > ft_strlen(s))
		r = e->precision - ft_strlen(s);
	c = e->zero ? '0' : ' ';
	if (e->precision > ft_strlen(s))
		e->hash = 0;
	g_len += e->hash == 1 && ft_strcmp(s, "0") != 0 ? 1 : 0;
	if (e->width > 2)
		e->width -= e->hash == 1 && ft_strcmp(s, "0") != 0 ? 1 : 0;
	if (e->width > (ft_strlen(s) + r))
	{
		i = e->width - (ft_strlen(s) + r);
		g_len += i + r;
	}
	g_len += ft_strlen(s);
	ft_set_print_o(e, s, i, c);
	if (!e->min)
		ft_putstr(s);
}

void		print_o(t_env *e, void *data, int r)
{
	char	*s;

	if (e->type == 'o')
		s = ft_upcase(e, data, 8);
	else if (e->type == 'O')
	{
		e->mod = "l";
		s = ft_upcase(e, data, 8);
	}
	if (e->precision == -1 && ft_strcmp(s, "0") == 0)
	{
		if (e->hash)
		{
			ft_putstr("0");
			g_len++;
		}
		if (e->width > 0)
			ft_write_char(e->width, ' ');
		g_len += e->width;
		return ;
	}
	ft_print_op2(e, s, r);
	free(s);
}
