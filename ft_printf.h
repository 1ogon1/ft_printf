/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkonoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 16:50:58 by rkonoval          #+#    #+#             */
/*   Updated: 2017/05/17 16:05:55 by rkonoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include "ft_itoa/ft_itoa.h"
# include <stdarg.h>
# include <stdlib.h>
# include <wchar.h>

int				g_len;

typedef struct	s_env
{
	int			min;
	int			zero;
	int			hash;
	int			plus;
	int			width;
	int			space;
	int			priority;
	int			precision;
	char		q;
	char		*mod;
	char		type;
	int 		color;

}				t_env;

int				ft_printf(char *format, ...);
/*
**				CHECK ALL
*/
void			ft_check_width(t_env *e, char **format);
void			ft_check_flag(t_env *e, char **format);
void			ft_check_pres(t_env *e, char **format);
void			ft_check_mod(t_env *e, char **format);
void			ft_check(char	**format, t_env *e);
void			ft_check_color(t_env *e, char **format);
/*
**				OUTPUT ALL TYPES
*/
void			print_id(t_env *e, void *data, int r);
void			print_idp2(t_env *e, int r, char *s);
void			print_p(t_env *e, void *data, int r);
void			print_o(t_env *e, void *data, int r);
void			print_u(t_env *e, void *data, int r);
void			print_x(t_env *e, void *data, int r);
void			print_percent(t_env *e, char c);
void			print_s(t_env *e, void *data);
void			print_c(t_env *e, void *data);
void			print_sp2(t_env *e, char *s);
void			print_ss(t_env *e, void *data);
void			ft_notype(t_env *e, char **format);
/*
**				OUTPUT HELPS
*/
char			*ft_upcase(t_env *e, void *data, int base);
char			*ft_mod(t_env *e, void *data, int base);

void			ft_set_print(t_env *e, char *s, int i, char c);
void			ft_precision(t_env *e, char *s, int i, char c);
void			ft_minset(t_env *e, char *s, int i, char c);
void			ft_setp2(t_env *e, char *s, int i, char c);
void			ft_set(t_env *e, char *s, int i, char c);
void			ft_three(t_env *e, char *s, char c);
void			ft_print(t_env *e, char c, char *s);
void			ft_one(t_env *e, char *s, char c);
void			ft_two(t_env *e, char *s, char c);
void			ft_plus_space(t_env *e, char *s);
void			ft_write_char(t_env *e, int i, char c);
void			format_print(t_env *e, char **format);
void			ft_write(t_env *e, char *s, int i);
void			ft_write_pres(t_env *e, int i);
/*
**				LIBFT FUNCTION
*/
/*int				ft_strlen(const char *str);
int				ft_atoi(const char *str);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *s1, const char *s2);
char			*ft_strdup(const char *s1);

void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
void			ft_putstr(char const *s);
void			ft_putchar(char c);
*/
void			ft_print_color(t_env *e, char *str);
void			ft_print_color_c(t_env *e, char c);
#endif
