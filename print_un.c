/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_un.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:53:07 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/17 16:04:38 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_upcase(t_env *e, void *data, int base)
{
	if (ft_strcmp(e->mod, "l") == 0)
		return (ft_itoa_long_un((unsigned long int)data, base));
	else if (ft_strcmp(e->mod, "ll") == 0)
		return (ft_itoa_long_lg_un((unsigned long long int)data, base));
	else if (ft_strcmp(e->mod, "h") == 0)
		return (ft_itoa_short_un((unsigned short int)data, base));
	else if (ft_strcmp(e->mod, "hh") == 0)
		return (ft_itoa_base_un((unsigned char)data, base));
	else if (ft_strcmp(e->mod, "j") == 0)
		return (ft_itoa_uintmax_t((uintmax_t)data, base));
	else if (ft_strcmp(e->mod, "z") == 0)
		return (ft_itoa_uintmax_t((uintmax_t)data, base));
	else
		return (ft_itoa_base_un((unsigned int)data, base));
}
