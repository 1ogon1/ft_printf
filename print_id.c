/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_id.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:51:54 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 10:12:18 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_plus_space(t_env *e, char *s)
{
	if (e->type == 'u' || e->type == 'U')
	{
		e->q = 0;
		if (e->zero && e->space && !e->min && e->width > ft_strlen(s))
			e->q = '0';
		else if (e->width > ft_strlen(s) && e->min)
			e->q = ' ';
	}
	else
	{
		e->q = 0;
		if (s[0] != '-' || s[0] == '0')
		{
			if (e->plus)
				e->space = 0;
			if (e->space == 1 && e->plus == 0)
				e->q = ' ';
			else if (e->plus == 1 && e->space == 0)
				e->q = '+';
		}
	}
}

char	*ft_mod(t_env *e, void *data, int base)
{
	if (ft_strcmp(e->mod, "l") == 0)
		return (ft_itoa_long((long int)data, base));
	else if (ft_strcmp(e->mod, "ll") == 0)
		return (ft_itoa_long_lg((long long int)data, base));
	else if (ft_strcmp(e->mod, "h") == 0)
		return (ft_itoa_short((short int)data, base));
	else if (ft_strcmp(e->mod, "hh") == 0)
		return (ft_itoa_base((char)data, base));
	else if (ft_strcmp(e->mod, "j") == 0)
		return (ft_itoa_intmax_t((intmax_t)data, base));
	else if (ft_strcmp(e->mod, "z") == 0 && e->type == 'd')
		return (ft_itoa_intmax_t((intmax_t)data, base));
	else if (ft_strcmp(e->mod, "z") == 0 && e->type != 'd')
		return (ft_itoa_size_t((size_t)data, base));
	else
		return (ft_itoa_base((int)data, base));
}

void	ft_precision(t_env *e, char *s, int i, char c)
{
	if ((e->plus == 1 || e->space == 1) && s[0] != '-')
	{
		if (e->zero == 1)
		{
			ft_putchar(e->q);
			if (e->width > 0)
				ft_write_char(i, c);
			g_len++;
		}
		else
		{
			if (e->width > 0)
				ft_write_char(i, c);
			g_len++;
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

void	ft_set(t_env *e, char *s, int i, char c)
{
	if (e->min)
	{
		if ((e->plus == 1 || e->space == 1) && s[0] != '-')
		{
			ft_putchar(e->q);
			g_len++;
		}
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
	else
		ft_setp2(e, s, i, c);
}

void	print_id(t_env *e, void *data, int r)
{
	char	*s;
	int		len;

	if (e->type == 'D')
		e->mod = "l";
	s = ft_mod(e, data, 10);
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
	ft_plus_space(e, s);
	len = s[0] == '-' && e->min == 1 ? ft_strlen(s) - 1 : ft_strlen(s);
	g_len += len;
	print_idp2(e, r, s);
	free(s);
}
