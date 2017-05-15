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

void	ft_write(char *s, int i)
{
	int j;

	j = 0;
	if (i < 0)
		return ;
	while (j < i)
	{
		ft_putchar(s[j]);
		j++;
	}
}

void	ft_write_char(int i, char c)
{
	if (i < 0)
		return ;
	while (i)
	{
		ft_putchar(c);
		i--;
	}
}

void	ft_write_pres(int i)
{
	if (i < 0)
		return ;
	while (i)
	{
		ft_putchar('0');
		i--;
	}
}
