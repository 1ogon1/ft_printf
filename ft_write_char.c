/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:51:08 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/13 16:51:09 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write(t_env *e, char *s, int i)
{
	int j;

	j = 0;
	if (i < 0)
		return ;
	while (j < i)
	{
		if (s[j])
		{
			if (e->color)
			{
				ft_print_color_c(e, s[j]);
			}
			else
			{
				ft_putchar(s[j]);
			}
		}
		j++;
	}
}

void	ft_write_char(t_env *e, int i, char c)
{
	if (i < 0)
		return ;
	while (i)
	{
		if (e->color)
		{
			ft_print_color_c(e, c);
		}
		else
		{
			ft_putchar(c);
		}
		i--;
	}
}

void	ft_write_pres(t_env *e, int i)
{
	if (i < 0)
		return ;
	while (i)
	{
		if (e->color)
			ft_print_color_c(e, '0');
		else
			ft_putchar('0');
		i--;
	}
}
