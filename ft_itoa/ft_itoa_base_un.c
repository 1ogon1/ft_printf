/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_un.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:54:40 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/13 16:54:51 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static char	*ft_itoa_un(unsigned int tmp, int base, int size)
{
	char	*s;
	char	*tmp1;

	tmp1 = "0123456789ABCDEF";
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

char		*ft_itoa_base_un(unsigned int nb, int base)
{
	unsigned int	tmp;
	int				size;
	char			*s;

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
		s = ft_itoa_un(tmp, base, size);
	return (s);
}
