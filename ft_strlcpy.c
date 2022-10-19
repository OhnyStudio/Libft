/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:40:56 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 14:58:52 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = ft_strlen(src);
	if (dstsize == 0)
		return (str_len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (str_len);
}