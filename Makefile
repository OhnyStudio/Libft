# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 13:23:37 by jsavard           #+#    #+#              #
#    Updated: 2022/10/19 14:21:19 by jsavard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC = ft_atoi.c

all: $(NAME)

%.o: %. c
	$(CC) $(FLAGS) -c -o $@ $^

$(NAME): $(SRC:.c=.o)
	$(CC) $(FLAGS) -o $@ $^

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re:fclean $(NAME)
