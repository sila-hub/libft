/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:11:31 by slafdili          #+#    #+#             */
/*   Updated: 2021/04/21 15:26:25 by slafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelment;
	t_list	*newlist;

	if (!lst || !f)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		newelment = ft_lstnew(f(lst->content));
		if (!newelment)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newelment);
		lst = lst->next;
	}
	return (newlist);
}
