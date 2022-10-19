/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:38:02 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 17:35:38 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n--)
	{
		if (*str++ == c)
			return (s);
	}
	return (NULL);
}
