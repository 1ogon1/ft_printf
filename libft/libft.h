/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 13:03:54 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/15 13:08:36 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strlen(const char *str);
int		ft_atoi(const char *str);


char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *s1, const char *s2);

char	*ft_strdup(const char *s1);

void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	ft_putstr(char const *s);
void	ft_putchar(char c);

#endif
