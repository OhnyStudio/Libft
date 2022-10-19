/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:39:37 by jsavard           #+#    #+#             */
/*   Updated: 2022/10/19 13:54:54 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (0);
	return (ft_strcpy(str, src));
}