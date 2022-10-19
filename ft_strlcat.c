/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:40:41 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 13:48:35 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strlcat(char *dest, char *src, int size)
{
	int	len_dest;
	int	len_src;
	int	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest < size)
		len_src += len_dest;
	else
		len_src += size;
	if (size > 0)
	{
		while (src[i] && (i + len_dest) < size - 1)
		{
			dest[i + len_dest] = src[i];
			i++;
		}
		dest[i + len_dest] = '\0';
	}
	return (len_src);
}