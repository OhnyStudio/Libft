/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:38:02 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/22 13:05:01 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	int			i;

	str = s;
	i = 0;
	while (n--)
	{
		if (str[i] == c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
