/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sp2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 10:29:15 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 14:28:25 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_two(t_env *e, char *s, char c)
{
	if (e->precision > ft_strlen(s))
	{
		ft_write_char(e->width - e->precision, c);
		ft_write_char(e->precision - ft_strlen(s), c);
		ft_putstr(s);
		g_len += ft_strlen(s) + (e->precision - ft_strlen(s)) +
				(e->width - e->precision);
	}
	else if (e->precision < ft_strlen(s))
	{
		ft_write_char(e->width - e->precision, c);
		ft_write(s, e->precision);
		g_len += e->precision + (e->width - e->precision);
	}
}

void		ft_one(t_env *e, char *s, char c)
{
	if (e->width > ft_strlen(s))
	{
		ft_write_char(e->width - ft_strlen(s), c);
		ft_putstr(s);
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

static void	ft_radi_normi(t_env *e, char *s)
{
	if (e->precision > ft_strlen(s))
		ft_write(s, ft_strlen(s) - (ft_strlen(s) - e->precision));
	else
		ft_write(s, e->precision);
	if (e->precision > ft_strlen(s))
		g_len += ft_strlen(s);
	else
		g_len += e->precision;
}

void		ft_three(t_env *e, char *s, char c)
{
	if (e->precision == 0 && ft_strlen(s) > 0)
	{
		if (e->width > ft_strlen(s))
		{
			if (e->min)
			{
				ft_putstr(s);
				ft_write_char(e->width - ft_strlen(s), c);
			}
			else
			{
				ft_write_char(e->width - ft_strlen(s), c);
				ft_putstr(s);
			}
			g_len += e->width;
		}
		else
		{
			ft_putstr(s);
			g_len += ft_strlen(s);
		}
	}
	else if (e->precision > 0 && ft_strlen(s) > 0)
		ft_radi_normi(e, s);
}

void		print_sp2(t_env *e, char *s)
{
	char	c;
	int		flag;

	flag = 0;
	if (!s)
	{
		s = ft_strdup("(null)");
		flag = 1;
	}
	c = e->zero ? '0' : ' ';
	if (!s)
		ft_print(e, c, "(null)");
	else
	{
		if (ft_strlen(s) == 0)
		{
			ft_write_char(e->width, c);
			g_len+= e->width;
		}
		else
			ft_print(e, c, s);
	}
	if (flag)
		free(s);
}
