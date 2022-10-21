/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:42:07 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/21 12:56:19 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			j;
	const char	*tmp;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			tmp = &s[i];
			j++;
		}
		i++;
	}
	if (s[i] == c)
		return ((void *)&s[i]);
	if (j == 0)
		return (NULL);
	else
		return ((void *)tmp);
}
