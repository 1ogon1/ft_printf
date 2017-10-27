# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaragul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/28 18:18:25 by egaragul          #+#    #+#              #
#    Updated: 2017/05/15 13:36:55 by rkonoval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
 
NAME = libftprintf.a

SRC = print_x.c\
	  print_c.c\
	  print_o.c\
	  print_p.c\
	  print_u.c\
	  print_s.c\
	  print_n.c\
	  print_id.c\
	  print_ss.c\
	  print_un.c\
	  ft_check.c\
	  ft_notype.c\
	  print_sp2.c\
	  print_mid.c\
	  ft_printf.c\
	  print_idp2.c\
	  libft/ft_pow.c\
	  print_percent.c\
	  ft_write_char.c\
	  libft/ft_atoi.c\
	  libft/ft_bzero.c\
	  ft_check_color.c\
	  ft_check_other.c\
	  libft/ft_putstr.c\
	  libft/ft_strcmp.c\
	  libft/ft_strdup.c\
	  libft/ft_strlen.c\
	  libft/ft_strcpy.c\
	  libft/ft_strcat.c\
	  libft/ft_strjoin.c\
	  libft/ft_putchar.c\
	  libft/ft_memalloc.c\
	  libft/ft_numberlen.c\
	  ft_itoa/ft_itoa_long.c\
	  ft_itoa/ft_itoa_base.c\
	  ft_itoa/ft_itoa_short.c\
	  ft_itoa/ft_itoa_size_t.c\
	  ft_itoa/ft_itoa_base_un.c\
	  ft_itoa/ft_itoa_long_un.c\
	  ft_itoa/ft_itoa_long_lg.c\
	  ft_itoa/ft_itoa_intmax_t.c\
	  ft_itoa/ft_itoa_base_low.c\
	  ft_itoa/ft_itoa_long_low.c\
	  ft_itoa/ft_itoa_short_un.c\
	  ft_itoa/ft_itoa_short_low.c\
	  ft_itoa/ft_itoa_uintmax_t.c\
	  ft_itoa/ft_itoa_size_t_low.c\
	  ft_itoa/ft_itoa_long_lg_un.c\
	  ft_itoa/ft_itoa_long_lg_low.c\
	  ft_itoa/ft_itoa_intmax_t_low.c

GG = $(SRC:.c=.o)
HEAD = ft_printf.h
FLAG = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(GG)
	ar rc $(NAME) $(GG)
	ranlib $(NAME)

%.o: %c $(HEAD)
	gcc -o $(NAME) $(FLAG) $@ $<

clean:
	rm -f ft_itoa/*.o
	rm -f $(GG)

fclean: clean
	rm -f $(NAME)

re: fclean all
