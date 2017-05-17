/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_intmax_t_low.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:55:11 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/13 17:04:06 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

static int	f_len_size_t_low(uintmax_t nbr)
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

static char	set_char_size_t_low(uintmax_t i)
{
	char	c;

	c = 'a';
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

static void	fff_low(uintmax_t value, long int base, char *s, int *i)
{
	if (value >= base)
		fff_low(value / base, base, s, i);
	s[(*i)++] = set_char_size_t_low(value % base);
}

char		*ft_itoa_uintmax_t_low(uintmax_t value, int base)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = f_len_size_t_low(value) + 1;
	if (base < 2 || base > 16 || !(s = (char*)malloc(sizeof(char) * len)))
		return (0);
	fff_low(value, base, s, &i);
	s[i] = '\0';
	return (s);
}
