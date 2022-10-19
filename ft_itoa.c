/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:00:26 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 17:38:47 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	ft_reverse_arr(char *str)
{
	char	tmp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) -1;
	while (i < len)
	{
		tmp = str[i];
		str[i++] = str[len];
		str[len--] = tmp;
	}
}

static void	ft_check_n(int n, int i, char *nb)
{
	if (n == -2147483648)
	{
		nb[i++] = '-';
		nb[i++] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		nb[i++] = '-';
		n *= -1;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*nb;
	char	*temp;

	i = 0;
	j = 0;	
	nb = (char *)malloc(sizeof(char) * 12);
	temp = (char *)malloc(sizeof(char) * 10);
	ft_check_n(n, i, nb);
	while (n != 0)
	{
		temp[j++] = (n % 10) + 48;
		n /= 10;
	}
	ft_reverse_arr(temp);
	j = 0;
	while (temp[j])
	{
		nb[i++] = temp[j++];
	}
	return (nb);
}
