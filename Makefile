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

SRC = ft_check.c\
	  ft_check_other.c\
	  ft_printf.c\
	  ft_write_char.c\
	  print_c.c\
	  print_id.c\
	  print_idp2.c\
	  print_mid.c\
	  print_o.c\
	  print_p.c\
	  print_percent.c\
	  print_s.c\
	  print_sp2.c\
	  print_ss.c\
	  print_u.c\
	  print_un.c\
	  print_x.c\
	  ft_itoa/ft_itoa_base.c\
	  ft_itoa/ft_itoa_base_low.c\
	  ft_itoa/ft_itoa_base_un.c\
	  ft_itoa/ft_itoa_intmax_t.c\
	  ft_itoa/ft_itoa_intmax_t_low.c\
	  ft_itoa/ft_itoa_long.c\
	  ft_itoa/ft_itoa_long_lg.c\
	  ft_itoa/ft_itoa_long_lg_low.c\
	  ft_itoa/ft_itoa_long_lg_un.c\
	  ft_itoa/ft_itoa_long_low.c\
	  ft_itoa/ft_itoa_long_un.c\
	  ft_itoa/ft_itoa_short.c\
	  ft_itoa/ft_itoa_short_low.c\
	  ft_itoa/ft_itoa_short_un.c\
	  ft_itoa/ft_itoa_size_t.c\
	  ft_itoa/ft_itoa_size_t_low.c\
	  ft_itoa/ft_itoa_uintmax_t.c\
	  libft/ft_atoi.c\
	  libft/ft_bzero.c\
	  libft/ft_memalloc.c\
	  libft/ft_putchar.c\
	  libft/ft_putstr.c\
	  libft/ft_strcmp.c\
	  libft/ft_strdup.c\
	  libft/ft_strlen.c

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