/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:55:21 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 09:59:38 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static int	f_len(long int nbr)
{
	int		size;

	size = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		size++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

static char	set_char(long int i)
{
	char	c;

	c = 'Z';
	if (i < 0)
		i = -i;
	if (i >= 0 && i <= 9)
		c = i + '0';
	else if (i == 10)
		c = 'A';
	else if (i == 11)
		c = 'B';
	else if (i == 12)
		c = 'C';
	else if (i == 13)
		c = 'D';
	else if (i == 14)
		c = 'E';
	else if (i == 15)
		c = 'F';
	return (c);
}

static void	f(long int value, long int base, char *s, int *i)
{
	if (value <= -base || value >= base)
		f(value / base, base, s, i);
	s[(*i)++] = set_char(value % base);
}

char		*ft_itoa_long(long int value, int base)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = f_len(value) + 1;
	if (base < 2 || base > 16 || !(s = (char*)malloc(sizeof(char) * len)))
		return (0);
	if (base == 10 && value < 0)
		s[i++] = '-';
	f(value, base, s, &i);
	s[i] = '\0';
	return (s);
}
