/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xX.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:53:14 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 12:03:43 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_lowcase(t_env *e, void *data, int base)
{
	if (ft_strcmp(e->mod, "l") == 0)
		return (ft_itoa_long_low((unsigned long int)data, base));
	else if (ft_strcmp(e->mod, "ll") == 0)
		return (ft_itoa_long_lg_low((unsigned long long int)data, base));
	else if (ft_strcmp(e->mod, "h") == 0)
		return (ft_itoa_short_low((unsigned short int)data, base));
	else if (ft_strcmp(e->mod, "hh") == 0)
		return (ft_itoa_base_low((unsigned char)data, base));
	else if (ft_strcmp(e->mod, "j") == 0)
		return (ft_itoa_uintmax_t_low((uintmax_t)data, base));
	else if (ft_strcmp(e->mod, "z") == 0)
		return (ft_itoa_size_t_low((uintmax_t)data, base));
	else
		return (ft_itoa_base_low((unsigned int)data, base));
}

static void	ft_min(t_env *e, char *s, int i)
{
	if (e->hash == 1)
		e->type == 'x' ? /*ft_putstr("0x")*/ft_print_color(e, "0x") : /*ft_putstr("0X")*/ft_print_color(e, "0X");
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

void		ft_set_print(t_env *e, char *s, int i, char c)
{
	if (e->min)
		ft_min(e, s, i);
	else
	{
		if (e->zero)
		{
			if (e->hash == 1 && ft_strcmp(s, "0") != 0)
				e->type == 'x' ? /*ft_putstr("0x")*/ft_print_color(e, "0x") : /*ft_putstr("0X")*/ft_print_color(e, "0X");
			if (e->width > 0)
				ft_write_char(e, i, c);
		}
		if (!e->zero)
		{
			if (e->width > 0)
				ft_write_char(e, i, c);
			if (e->hash == 1 && ft_strcmp(s, "0") != 0)
				e->type == 'x' ? /*ft_putstr("0x")*/ft_print_color(e, "0x") : /*ft_putstr("0X")*/ft_print_color(e, "0X");
		}
		if (e->precision > ft_strlen(s))
		{
			ft_write_pres(e, e->precision - ft_strlen(s));
			if (e->width <= e->precision)
				g_len += e->precision - ft_strlen(s);
		}
	}
}

static void	ft_print_xp2(t_env *e, char *s, int r, char c)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	g_len += e->hash == 1 && ft_strcmp(s, "0") != 0 ? 2 : 0;
	if (e->width > 2)
		e->width -= e->hash == 1 && ft_strcmp(s, "0") != 0 ? 2 : 0;
	g_len += len;
	if (e->width > (len + r))
	{
		i = e->width - (len + r);
		g_len += i + r;
	}
	ft_set_print(e, s, i, c);
	if (!e->min)
		/*ft_putstr(s);*/ft_print_color(e, s);
}

void		print_x(t_env *e, void *data, int r)
{
	char	*s;
	int		len;
	char	c;

	s = e->type == 'x' ? ft_lowcase(e, data, 16) : ft_upcase(e, data, 16);
	if (e->precision == -1 && ft_strcmp(s, "0") == 0)
	{
		if (e->width > 0)
			ft_write_char(e, e->width, ' ');
		g_len += e->width;
		return ;
	}
	else if (e->precision == -1 && ft_strcmp(s, "0") != 0)
		e->precision = 0;
	if (e->precision > 0)
		e->zero = 0;
	len = ft_strlen(s);
	if (e->precision > len)
		r = e->precision - len;
	c = e->zero ? '0' : ' ';
	ft_print_xp2(e, s, r, c);
	free(s);
}
