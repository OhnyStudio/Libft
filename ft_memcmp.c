/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:38:17 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 17:35:36 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char const	*c1;
	char const	*c2;

	c1 = s1;
	c2 = s2;
	while (*c1 == *c2)
	{
		c1++;
		c2++;
	}
	return (*c1 - *c2);
}
