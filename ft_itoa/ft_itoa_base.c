/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:53:56 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 12:07:14 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static char	*ft_itoa(long tmp, int base, int size)
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

char		*ft_itoa_base(int nb, int base)
{
	long	tmp;
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
		s = ft_itoa(tmp, base, size);
	return (s);
}
