/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:43:30 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/28 14:32:58 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	num;

	if (!lst)
		return (0);
	num = 0;
	while (lst)
	{
		num++;
		lst = lst->next;
	}
	return (num);
}
