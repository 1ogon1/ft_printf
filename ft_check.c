/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:50:16 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 10:09:44 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_null(t_env *e)
{
	e->q = 0;
	e->min = 0;
	e->mod = 0;
	e->zero = 0;
	e->hash = 0;
	e->plus = 0;
	e->type = 0;
	e->space = 0;
	e->width = 0;
	//e->color = 0;
	e->priority = 0;
	e->precision = 0;
}

static void	ft_sec_check(t_env *e, char **format)
{
	if (**format == 'S')
		e->type = 'S';
	else if (**format == 'p')
		e->type = 'p';
	else if (**format == 'd')
		e->type = 'd';
	else if (**format == 'D')
		e->type = 'D';
	else if (**format == 'i')
		e->type = 'i';
	else if (**format == '%')
		e->type = '%';
}

static void	ft_check_type(t_env *e, char **format)
{
	if (**format == '{')
		ft_check_color(e, format);
	else if (**format == 'o')
		e->type = 'o';
	else if (**format == 'O')
		e->type = 'O';
	else if (**format == 'u')
		e->type = 'u';
	else if (**format == 'U')
		e->type = 'U';
	else if (**format == 'x')
		e->type = 'x';
	else if (**format == 'X')
		e->type = 'X';
	else if (**format == 'c')
		e->type = 'c';
	else if (**format == 'C')
		e->type = 'C';
	else if (**format == 's')
		e->type = 's';
	else
		ft_sec_check(e, format);
}

void		ft_check(char **format, t_env *e)
{
	ft_null(e);
	while (**format)
	{
		if (**format == '-' || **format == '+' || **format == ' ' ||
				**format == '0' || **format == '#')
		{
			ft_check_flag(e, format);
			(*format)++;
		}
		else if (**format >= '1' && **format <= '9')
			ft_check_width(e, format);
		else if (**format == '.')
			ft_check_pres(e, format);
		else if (**format == 'l' || **format == 'h' ||
				**format == 'j' || **format == 'z')
			ft_check_mod(e, format);
		else
		{
			ft_check_type(e, format);
			break ;
		}
	}
	if (e->type)
		(*format)++;
}
