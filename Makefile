NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC = 	ft_bzero.c ft_memmove.c ft_memcpy.c ft_strlen.c ft_toupper.c\
		ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isdigit.c ft_tolower.c\
		ft_strlcpy.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_putstr_fd.c ft_isascii.c ft_itoa.c ft_memchr.c ft_atoi.c\
		ft_strlcat.c ft_strncmp.c ft_memcmp.c ft_strchr.c ft_strrchr.c\
		ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_memset.c ft_strtrim.c 
TODO =	ft_strmapi.c ft_striteri ft_split.c
BONUS = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c  ft_lstmap.c
HEADER = libft.h
FILEO = $(SRC:.c=.o)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I ./includes
	ar rc $(NAME) $(FILEO)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(FILEO) $(BONUS:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all
