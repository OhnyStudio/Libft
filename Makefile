# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 13:23:37 by jsavard           #+#    #+#              #
#    Updated: 2022/10/19 17:32:17 by jsavard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC =	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c  ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c  ft_memset.c ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
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
