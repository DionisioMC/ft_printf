/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:28:27 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/29 12:11:51 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *) s;
	while (i < n)
	{
		if (mem[i] == (unsigned char) c)
			return (&mem[i]);
		i++;
	}
	return (NULL);
}
