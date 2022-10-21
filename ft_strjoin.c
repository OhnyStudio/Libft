/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:40:10 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/21 14:57:18 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = (char *)malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		new[j++] = s2[i++];
	}
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	new[j] = '\0';
	return (new);
}
