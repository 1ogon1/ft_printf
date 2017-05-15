/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_other.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:50:30 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 10:10:23 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_pres(t_env *e, char **format)
{
	e->precision = 0;
	(*format)++;
	if (**format >= '1' && **format <= '9')
	{
		e->precision = ft_atoi(*format);
		while (**format >= '0' && **format <= '9')
			(*format)++;
	}
	else
	{
		if ((**format >= 'a' && **format <= 'z') ||
				(**format >= 'A' && **format <= 'Z'))
			e->precision = -1;
		if (**format == '0')
			e->precision = -1;
	}
}

void	ft_check_mod(t_env *e, char **format)
{
	if (**format == 'h')
		e->mod = "h";
	else if (**format == 'l')
		e->mod = "l";
	else if (**format == 'j')
		e->mod = "j";
	else if (**format == 'z')
		e->mod = "z";
	(*format)++;
	if (**format == 'h')
	{
		e->mod = "hh";
		(*format)++;
	}
	else if (**format == 'l')
	{
		e->mod = "ll";
		(*format)++;
	}
}

void	ft_check_width(t_env *e, char **format)
{
	e->width = ft_atoi(*format);
	while (**format >= '0' && **format <= '9')
		(*format)++;
}

void	ft_check_flag(t_env *e, char **format)
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
