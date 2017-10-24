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
# include <stdlib.h>


# include<math.h>

int				g_len;

typedef struct	s_env
{
	char		q;
	char		*mod;
	char		type;
	int			min;
	int			zero;
	int			hash;
	int			plus;
	int 		color;
	int			width;
	int			space;
	int			priority;
	int			precision;

}				t_env;

int				ft_printf(char *format, ...);
/*
**				CHECK ALL
*/
void			ft_check_width(t_env *e, char **format);
void			ft_check_color(t_env *e, char **format);
void			ft_check_flag(t_env *e, char **format);
void			ft_check_pres(t_env *e, char **format);
void			ft_check_mod(t_env *e, char **format);
void			ft_check(char	**format, t_env *e);
/*
**				OUTPUT ALL TYPES
*/
void			print_id(t_env *e, void *data, int r);
void			print_idp2(t_env *e, int r, char *s);
void			print_p(t_env *e, void *data, int r);
void			print_o(t_env *e, void *data, int r);
void			print_u(t_env *e, void *data, int r);
void			print_x(t_env *e, void *data, int r);
void			print_f(t_env *e, void *data, char *str, va_list *ap, int size);
//void			print_f(t_env *e, va_list ap, int r);
void			ft_notype(t_env *e, char **format);
void			print_percent(t_env *e, char c);
void			print_ss(t_env *e, void *data);
void			print_s(t_env *e, void *data);
void			print_c(t_env *e, void *data);
void			print_sp2(t_env *e, char *s);
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
void			ft_write_char(t_env *e, int i, char c);
void			format_print(t_env *e, char **format);
void			ft_three(t_env *e, char *s, char c);
void			ft_print(t_env *e, char c, char *s);
void			ft_write(t_env *e, char *s, int i);
void			ft_one(t_env *e, char *s, char c);
void			ft_two(t_env *e, char *s, char c);
void			ft_plus_space(t_env *e, char *s);
void			ft_write_pres(t_env *e, int i);
/*
**				PRINT WITH COLOR
*/
void			ft_print_color(t_env *e, char *str);
void			ft_print_color_c(t_env *e, char c);


float			get_data(va_list ap);
#endif
