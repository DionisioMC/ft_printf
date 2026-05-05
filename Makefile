# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/29 17:25:08 by dcoelho           #+#    #+#              #
#    Updated: 2026/05/05 19:16:17 by dcoelho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I libft

FILES = ft_printf.c ft_write_char.c ft_write_str.c ft_write_ptr.c ft_write_num.c \
ft_write_unsigned.c ft_write_hex.c

LIBFT = libft/libft.a

OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp $(LIBFT) $(NAME)
	make -C libft fclean
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re