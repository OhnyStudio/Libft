/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:39:04 by jsavard           #+#    #+#             */
/*   Updated: 2022/11/09 13:05:39 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		tmp;
	char	**strs;

	strs = ft_calloc(sizeof(char *), (ft_count_split(s, c) + 1));
	if (!strs || !s)
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
			strs[j] = ft_calloc((i - tmp + 1), sizeof(char));
			ft_strlcpy(strs[j++], &s[tmp], (i - tmp) + 1);
			tmp = -1;
		}
		i++;
	}
	strs[j] = 0;
	return (strs);
}

/*int	main(void)
{
	char	**strs;
	int		i;

	strs = ft_split("hello!", ' ');
	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
	strs = ft_split("hello! test", ' ');
	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}*/
