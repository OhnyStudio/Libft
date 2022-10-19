/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:40:56 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 13:44:09 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strlcpy(char *dest, char *src, int size)
{
	unsigned int	i;
	unsigned int	str_len;

	i = 0;
	str_len = ft_strlen(src);
	if (size == 0)
		return (str_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (str_len);
}