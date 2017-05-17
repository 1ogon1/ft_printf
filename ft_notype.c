/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_notype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:02:46 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/17 16:02:47 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_notype(t_env *e, char **format)
{
	if (e->min)
	{
		ft_putchar(**format);
		ft_write_char(e->width - 1, ' ');
		if (e->width > 0)
			g_len += e->width;
		else if (**format)
			g_len++;
	}
	else
	{
		ft_write_char(e->width - 1, ' ');
		ft_putchar(**format);
		if (e->width > 0)
			g_len += e->width;
		else if (**format)
			g_len++;
	}
	if (**format)
		(*format)++;
}
