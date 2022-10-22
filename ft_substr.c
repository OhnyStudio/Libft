/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:42:46 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/22 09:04:11 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	j;
	size_t	max;
	char	*new;

	if (!s)
		return (NULL);
	i = start;
	j = 0;
	max = ft_strlen(s);
	if (start >= max || start >= len)
	{
		new = (char *)malloc(sizeof(char) * 1);
		new[len] = '\0';
		return (new);
	}
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new || len <= 0)
		return (NULL);
	while (j < len)
	{
		new[j++] = s[i++];
	}
	new[len] = '\0';
	return (new);
}
