/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_short.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:56:09 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/13 16:56:18 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static char	*ft_itoa_sh(int tmp, int base, int size)
{
	int		min;
	char	*s;
	char	*tmp1;

	min = 0;
	tmp1 = "0123456789ABCDEF";
	if (tmp < 0 && base == 10)
	{
		min = 1;
		size++;
	}
	if (tmp < 0)
		tmp = -tmp;
	s = (char *)malloc(sizeof(char) * size + 1);
	if (min == 1)
		s[0] = '-';
	s[size] = '\0';
	size--;
	while (tmp)
	{
		s[size] = tmp1[tmp % base];
		tmp /= base;
		size--;
	}
	return (s);
}

char		*ft_itoa_short(short int nb, int base)
{
	int		tmp;
	int		size;
	char	*s;

	tmp = nb;
	size = 0;
	while (nb /= base)
		size++;
	size++;
	if (tmp == 0)
	{
		s = (char *)malloc(sizeof(char) * 2);
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	else
		s = ft_itoa_sh(tmp, base, size);
	return (s);
}
