/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:53:37 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/13 16:59:51 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITOA_H
# define FT_ITOA_H
# include <stdlib.h>

char	*ft_itoa_long_lg_low(unsigned long long int value, int base);
char	*ft_itoa_long_lg_un(unsigned long long int value, int base);
char	*ft_itoa_size_t_low(unsigned long long int nb, int base);
char	*ft_itoa_long_low(unsigned long int value, int base);
char	*ft_itoa_long_un(unsigned long int value, int base);
char	*ft_itoa_short_low(unsigned short int nb, int base);
char	*ft_itoa_short_un(unsigned short int nb, int base);
char	*ft_itoa_long_lg(long long int value, int base);
char	*ft_itoa_uintmax_t_low(uintmax_t value, int base);
char	*ft_itoa_uintmax_t(uintmax_t value, int base);
char	*ft_itoa_base_low(unsigned int nb, int base);
char	*ft_itoa_intmax_t(intmax_t value, int base);
char	*ft_itoa_base_un(unsigned int nb, int base);
char	*ft_itoa_long(long int value, int base);
char	*ft_itoa_short(short int nb, int base);
char	*ft_itoa_size_t(size_t nb, int base);
char	*ft_itoa_base(int nb, int base);

#endif
