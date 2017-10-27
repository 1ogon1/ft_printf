/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:28:22 by rkonoval          #+#    #+#             */
/*   Updated: 2017/10/26 18:28:26 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_red(t_env *e, const char *color, char **format, int i)
{
	char	*str;

	str = "red";
	while (str[i] == color[i])
	{
		if (str[i] == 'd' && color[i] == 'd' && color[i + 1] == '}')
		{
			e->color = 1;
			(*format) += 4;
			break ;
		}
		i++;
	}
	if (!e->color)
	{
		ft_print_color_c(e, '{');
		g_len++;
	}
}

static void	check_green(t_env *e, const char *color, char **format, int i)
{
	char	*str;

	str = "green";
	while (str[i] == color[i])
	{
		if (str[i] == 'n' && color[i] == 'n' && color[i + 1] == '}')
		{
			e->color = 2;
			(*format) += 6;
			break ;
		}
		i++;
	}
	if (!e->color)
	{
		ft_print_color_c(e, '{');
		g_len++;
	}
}

static void	check_blue(t_env *e, const char *color, char **format, int i)
{
	char	*str;

	str = "blue";
	while (str[i] == color[i])
	{
		if (str[i] == 'e' && color[i] == 'e' && color[i + 1] == '}')
		{
			e->color = 3;
			(*format) += 5;
			break ;
		}
		i++;
	}
	if (!e->color)
	{
		ft_print_color_c(e, '{');
		g_len++;
	}
}

static void	check_eoc(t_env *e, const char *color, char **format, int i)
{
	char	*str;

	str = "eoc";
	while (str[i] == color[i])
	{
		if (str[i] == 'c' && color[i] == 'c' && color[i + 1] == '}')
		{
			e->color = 0;
			(*format) += 4;
			break ;
		}
		i++;
	}
}

void		ft_check_color(t_env *e, char **format)
{
	char	*str;

	(*format)++;
	str = *format;
	while (str)
	{
		if (*str == 'r' || *str == 'g' || *str == 'b' || *str == 'e')
		{
			if (*str == 'r')
				check_red(e, str, format, 0);
			else if (*str == 'g')
				check_green(e, str, format, 0);
			else if (*str == 'b')
				check_blue(e, str, format, 0);
			else if (*str == 'e')
				check_eoc(e, str, format, 0);
			break ;
		}
		else
		{
			ft_print_color_c(e, '{');
			g_len++;
			break ;
		}
	}
}
