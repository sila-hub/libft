/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 22:27:36 by slafdili          #+#    #+#             */
/*   Updated: 2021/04/21 15:24:10 by slafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*lastnode;

	if (lst == NULL || *lst == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		lastnode = tmp;
		tmp = tmp->next;
		del(lastnode->content);
		free(lastnode);
	}
	*lst = NULL;
}
