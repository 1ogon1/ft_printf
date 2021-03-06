/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_long_lg_low.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:55:38 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 13:46:44 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static int	f_len_lg_low(unsigned long long int nbr)
{
	int		size;

	size = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

static char	set_char_lg_low(unsigned long long int i)
{
	char	c;

	c = 'z';
	if (i <= 9)
		c = i + '0';
	else if (i == 10)
		c = 'a';
	else if (i == 11)
		c = 'b';
	else if (i == 12)
		c = 'c';
	else if (i == 13)
		c = 'd';
	else if (i == 14)
		c = 'e';
	else if (i == 15)
		c = 'f';
	return (c);
}

static void	ff_low(unsigned long long int value, long int base, char *s, int *i)
{
	if (value >= base)
		ff_low(value / base, base, s, i);
	s[(*i)++] = set_char_lg_low(value % base);
}

char		*ft_itoa_long_lg_low(unsigned long long int value, int base)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = f_len_lg_low(value) + 1;
	if (base < 2 || base > 16 || !(s = (char*)malloc(sizeof(char) * len)))
		return (0);
	ff_low(value, base, s, &i);
	s[i] = '\0';
	return (s);
}
