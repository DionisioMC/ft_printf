/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:01:14 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/29 12:06:36 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total;

	if (nmemb != 0 && size > (SIZE_MAX / nmemb))
		return (NULL);
	total = nmemb * size;
	mem = malloc(total);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total);
	return (mem);
}
