/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:00:26 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/22 07:50:00 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_check_len(int n)
{
	int		i;
	long	tmp;

	tmp = n;
	i = 2;
	if (tmp < 0)
	{
		tmp *= -1;
		i++;
	}
	while (tmp > 9)
	{
		tmp /= 10;
		i++;
	}
	return (i);
}

static char	*ft_create_char(int n, char *nb, char *temp)
{
	int		i[2];

	i[0] = 0;
	i[1] = 0;
	if (n == -2147483648)
	{
		nb[i[0]++] = '-';
		nb[i[0]++] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		nb[i[0]++] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		temp[i[1]++] = (n % 10) + 48;
		n /= 10;
	}
	temp[i[1]++] = (n % 10) + 48;
	while (i[1]--)
		nb[i[0]++] = temp[i[1]];
	nb[i[0]++] = '\0';
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*nb;
	char	*temp;

	nb = (char *)malloc(sizeof(char) * ft_check_len(n));
	temp = (char *)malloc(sizeof(char) * (ft_check_len(n)));
	if (!nb && !temp)
		return (NULL);
	free(temp);
	return (ft_create_char(n, nb, temp));
}
