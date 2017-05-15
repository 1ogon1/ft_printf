/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_intmax_t.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:55:01 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/13 17:02:55 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static int	f_len_intmax_t(intmax_t nbr)
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

static char	set_char_intmax_t(intmax_t i)
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

static void	fff(intmax_t value, long int base, char *s, int *i)
{
	if (value <= -base || value >= base)
		fff(value / base, base, s, i);
	s[(*i)++] = set_char_intmax_t(value % base);
}

char		*ft_itoa_intmax_t(intmax_t value, int base)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = f_len_intmax_t(value) + 1;
	if (base < 2 || base > 16 || !(s = (char*)malloc(sizeof(char) * len)))
		return (0);
	if (base == 10 && value < 0)
		s[i++] = '-';
	fff(value, base, s, &i);
	s[i] = '\0';
	return (s);
}
