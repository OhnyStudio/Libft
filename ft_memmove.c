/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:38:44 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 17:35:33 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	char		*lastd;
	const char	*lasts;
	const char	*sourc;

	dest = dst;
	sourc = src;
	if (!dest && !sourc)
		return (dst);
	if (dest < sourc)
		while (len--)
			*dest++ = *sourc++;
	else
	{
		lastd = dest + (len - 1);
		lasts = sourc + (len - 1);
		while (len--)
		{
			*lastd-- = *lasts--;
		}
	}
	return (dst);
}
