/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:39:04 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/26 15:54:19 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_split(char const *s, char c)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (*s)
	{
		if (*s != c && tmp == 0)
		{
			tmp = 1;
			i++;
		}
		else if (*s == c)
		{
			tmp = 0;
		}
		s++;
	}
	return (i);
}

static char	*ft_create_str(const char *str, int start, int finish)
{
	char	*temp;
	int		i;

	i = 0;
	temp = ft_calloc((finish - start + 1), sizeof(char));
	ft_strlcpy(temp, &str[start], (finish - start) + 1);
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		tmp;
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * (ft_count_split(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	tmp = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && tmp < 0)
			tmp = i;
		else if ((s[i] == c || i == ft_strlen(s)) && tmp >= 0)
		{
			strs[j++] = ft_create_str(s, tmp, i);
			tmp = -1;
		}
		i++;
	}
	strs[j] = 0;
	return (strs);
}
