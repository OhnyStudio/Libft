/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:38:33 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 17:35:34 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	char const	*s;

	d = dst;
	s = src;
	if (!s && !d)
		return (0);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
