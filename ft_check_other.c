/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_other.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:50:30 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/17 16:03:30 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_check_pres(t_env *e, char **format)
{
	e->precision = 0;
	(*format)++;
	if (**format >= '1' && **format <= '9') {
		e->precision = ft_atoi(*format);
		while (**format >= '0' && **format <= '9')
			(*format)++;
	} else
		e->precision = -1;
}

static void	ft_check_modp2(t_env *e, char **format)
{
	if (**format == 'h' && e->priority == 2)
	{
		e->mod = "hh";
		e->priority = 1;
		(*format)++;
	}
	else if (**format == 'l' && e->priority == 3)
	{
		e->mod = "ll";
		e->priority = 5;
		(*format)++;
	}
}

void		ft_check_mod(t_env *e, char **format)
{
	if (**format == 'h' && e->priority < 2)
	{
		e->mod = "h";
		e->priority = 2;
	}
	else if (**format == 'l' && e->priority < 3)
	{
		e->mod = "l";
		e->priority = 3;
	}
	else if (**format == 'j' && e->priority < 4)
	{
		e->mod = "j";
		e->priority = 4;
	}
	else if (**format == 'z' && e->priority < 6)
	{
		e->mod = "z";
		e->priority = 6;
	}
	(*format)++;
	ft_check_modp2(e, format);
}

void		ft_check_width(t_env *e, char **format)
{
	e->width = ft_atoi(*format);
	while (**format >= '0' && **format <= '9')
		(*format)++;
}

void		ft_check_flag(t_env *e, char **format)
{
	if (**format == '-')
		e->min = 1;
	else if (**format == '+')
		e->plus = 1;
	else if (**format == ' ')
		e->space = 1;
	else if (**format == '0')
		e->zero = 1;
	else if (**format == '#')
		e->hash = 1;
}
