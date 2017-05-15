/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_size_t_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:57:30 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 10:04:08 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static char	*ft_itoa_size_low(unsigned long long int tmp, int base, int size)
{
	char	*s;
	char	*tmp1;

	tmp1 = "0123456789abcdef";
	s = (char *)malloc(sizeof(char) * size + 1);
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

char		*ft_itoa_size_t_low(unsigned long long int nb, int base)
{
	unsigned long long int	tmp;
	int						size;
	char					*s;

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
		s = ft_itoa_size_low(tmp, base, size);
	return (s);
}
