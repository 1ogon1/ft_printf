/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uU.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:53:01 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/17 16:05:30 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_setp2_u(t_env *e, char *s, int i, char c)
{
	if (e->precision == 0)
	{
		if (e->width > 0)
			ft_write_char(e, i, c);
	}
	if (e->precision > 0)
	{
		if (e->width > 0)
			ft_write_char(e, i, c);
	}
	if (e->precision > ft_strlen(s))
	{
		ft_write_pres(e, e->precision - ft_strlen(s));
		if (e->width <= e->precision)
			g_len += e->precision - ft_strlen(s);
	}
	/*ft_putstr(s);*/ft_print_color(e, s);
}

static void	ft_set_u(t_env *e, char *s, int i, char c)
{
	if (e->min)
	{
		if (e->precision > ft_strlen(s))
		{
			ft_write_pres(e, e->precision - ft_strlen(s));
			if (e->width <= e->precision)
				g_len += e->precision - ft_strlen(s);
		}
		/*ft_putstr(s);*/ft_print_color(e, s);
		if (e->width > 0)
			ft_write_char(e, i, ' ');
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
	if (e->width > (len + r))
	{
		i = e->width - (len + r);
		g_len += i + r;
	}
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
			ft_write_char(e, e->width, ' ');
		g_len += e->width;
		return ;
	}
	else if (e->precision == -1 && ft_strcmp(s, "0") != 0)
		e->precision = 0;
	if (e->precision > 0 || e->min)
		e->zero = 0;
	if (e->precision > ft_strlen(s))
		r = e->precision - ft_strlen(s);
	ft_print_up2(e, s, r, c);
}
