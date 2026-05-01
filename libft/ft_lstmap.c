/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:04:36 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/29 15:55:59 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	t_list	*last_node;
	void	*result;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	last_node = NULL;
	while (lst)
	{
		result = f(lst->content);
		node = ft_lstnew(result);
		if (!node)
		{
			if (result)
				del(result);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		last_node = node;
		lst = lst->next;
	}
	return (list);
}
