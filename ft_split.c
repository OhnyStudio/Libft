/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:39:04 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/22 08:46:34 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	**ft_set_strs(char const *s, char c)
{
	int		i;
	int		count;
	char	**strs;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	strs = (char **)malloc(sizeof(char *) * (count + 2));
	if (!strs)
		return (NULL);
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	strs = ft_set_strs(s, c);
}
