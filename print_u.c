/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uU.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:53:01 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 10:32:14 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_precisionnn(t_env *e, char *s, int i, char c)
{
	if ((e->plus == 1 || e->space == 1) && s[0] != '-')
	{
		if (e->zero == 1)
		{
			if (e->width > 0)
				ft_write_char(i, c);
			g_len++;
			ft_putchar(e->q);
		}
		else
		{
			if (e->width > 0)
				ft_write_char(i, c);
			ft_putchar(e->q);
		}
	}
	else
	{
		if (e->width > 0)
			ft_write_char(i, c);
		ft_putchar(e->q);
	}
}

static void	ft_setp2_u(t_env *e, char *s, int i, char c)
{
	if (e->precision == 0)
		ft_precisionnn(e, s, i, c);
	if (e->precision > 0)
	{
		if (e->width > 0)
			ft_write_char(i, c);
		if ((e->plus == 1 || e->space == 1) && s[0] != '-')
			ft_putchar(e->q);
	}
	if (e->precision > ft_strlen(s))
	{
		ft_write_pres(e->precision - ft_strlen(s));
		if (e->width <= e->precision)
			g_len += e->precision - ft_strlen(s);
	}
	ft_putstr(s);
}

static void	ft_set_u(t_env *e, char *s, int i, char c)
{
	if (e->min)
	{
		if (e->q == '0' || !e->q)
		{
			if ((e->plus == 1 || e->space == 1) && s[0] != '-')
				ft_putchar(e->q);
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
		else if (e->q == ' ')
			set_space(e, s, i);
	}
	else
		ft_setp2_u(e, s, i, c);
}

static void	ft_print_up2(t_env *e, char *s, int r, char c)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	g_len += ft_strlen(s);
	c = e->zero ? '0' : ' ';
	ft_plus_space(e, s);
	if (e->width > (len + r))
	{
		i = e->width - (len + r);
		if ((e->plus))
			i--;
		g_len += i + r;
	}
	if (e->plus)
		e->q = ' ';
	ft_set_u(e, s, i, c);
	free(s);
}

void		print_u(t_env *e, void *data, int r)
{
	char	*s;
	char	c;

	c = 0;
	if (e->type == 'u')
		s = ft_upcase(e, data, 10);
	else if (e->type == 'U')
	{
		e->mod = "l";
		s = ft_upcase(e, data, 10);
	}
	if (e->precision == -1 && ft_strcmp(s, "0") == 0)
	{
		if (e->width > 0)
			ft_write_char(e->width, ' ');
		g_len += e->width;
		return ;
	}
	else if (e->precision == -1 && ft_strcmp(s, "0") != 0)
		e->precision = 0;
	if (e->precision > 0)
		e->zero = 0;
	if (e->precision > ft_strlen(s))
		r = e->precision - ft_strlen(s);
	ft_print_up2(e, s, r, c);
}
