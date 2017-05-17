/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_uintmax_t.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:57:38 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 13:47:20 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static int	f_len_usize_t(uintmax_t nbr)
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

static char	set_char_usize_t(uintmax_t i)
{
	char	c;

	c = 'Z';
	if (i <= 9)
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

static void	fffu(uintmax_t value, long int base, char *s, int *i)
{
	if (value >= base)
		fffu(value / base, base, s, i);
	s[(*i)++] = set_char_usize_t(value % base);
}

char		*ft_itoa_uintmax_t(uintmax_t value, int base)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = f_len_usize_t(value) + 1;
	if (base < 2 || base > 16 || !(s = (char*)malloc(sizeof(char) * len)))
		return (0);
	fffu(value, base, s, &i);
	s[i] = '\0';
	return (s);
}
