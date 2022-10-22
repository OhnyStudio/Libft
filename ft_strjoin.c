/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:40:10 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/22 13:05:36 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(const char *str)
{
	if (str)
	{
		return (ft_strlen(str));
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	i = 0;
	j = 0;
	if (ft_len(s1) && ft_len(s2))
	{
		len = ft_len(s1) + ft_len(s2) + 1;
		new = (char *)malloc(sizeof(char) * len);
		if (!new)
			return (NULL);
		while (s1[i])
			new[j++] = s1[i++];
		i = 0;
		while (s2[i])
		{
			new[j++] = s2[i++];
		}
		new[j] = '\0';
		return (new);
	}
	return (NULL);
}
