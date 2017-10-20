cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c libft/ft_strjoin.c libft/ft_strcat.c libft/ft_strcpy.c print_x.c print_un.c print_u.c print_ss.c print_sp2.c print_s.c print_percent.c print_p.c print_o.c print_mid.c print_idp2.c print_id.c print_c.c ft_write_char.c ft_printf.c ft_notype.c ft_check_other.c ft_check.c libft/ft_strlen.c libft/ft_strdup.c libft/ft_strcmp.c libft/ft_putstr.c libft/ft_putchar.c libft/ft_memalloc.c libft/ft_bzero.c libft/ft_atoi.c ft_itoa/ft_itoa_base.c ft_itoa/ft_itoa_base_low.c ft_itoa/ft_itoa_base_un.c ft_itoa/ft_itoa_intmax_t.c ft_itoa/ft_itoa_intmax_t_low.c ft_itoa/ft_itoa_long.c ft_itoa/ft_itoa_long_lg.c ft_itoa/ft_itoa_long_lg_low.c ft_itoa/ft_itoa_long_lg_un.c ft_itoa/ft_itoa_long_low.c ft_itoa/ft_itoa_long_un.c ft_itoa/ft_itoa_short.c ft_itoa/ft_itoa_short_low.c ft_itoa/ft_itoa_short_un.c ft_itoa/ft_itoa_size_t.c ft_itoa/ft_itoa_size_t_low.c ft_itoa/ft_itoa_uintmax_t.c ft_check_color.c)
add_executable(untitled ${SOURCE_FILES})