/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsavard <jsavard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:37:17 by jsavard           #+#    #+#             */
/*   Updated: 2022/11/09 14:26:38 by jsavard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_error(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*save;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return (ft_error(&new, del));
	save = new;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (!new->next)
			return (ft_error(&new, del));
		lst = lst->next;
		new = new->next;
	}
	new->next = NULL;
	return (save);
}
