/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:39:37 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 17:35:17 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (0);
	return (ft_strcpy(str, s1));
}
