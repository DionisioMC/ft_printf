/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:18:46 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/27 17:00:35 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ele;

	ele = ft_calloc(1, sizeof(t_list));
	if (!ele)
		return (NULL);
	if (!content)
		ele->content = NULL;
	ele->content = content;
	ele->next = NULL;
	return (ele);
}
