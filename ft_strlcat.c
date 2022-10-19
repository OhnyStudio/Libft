/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:40:41 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 17:35:10 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	int	len_dest;
	int	len_src;
	int	i;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest < dstsize)
		len_src += len_dest;
	else
		len_src += dstsize;
	if (dstsize > 0)
	{
		while (src[i] && (i + len_dest) < dstsize - 1)
		{
			dst[i + len_dest] = src[i];
			i++;
		}
		dst[i + len_dest] = '\0';
	}
	return (len_src);
}
