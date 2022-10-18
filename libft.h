#ifndef LIBFT_H
#define LIBFT_H

#include<unistd.h>
#include<stdlib.h>

int	ft_atoi(const char *str);
void ft_bzero(void *s, int n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);
#endif