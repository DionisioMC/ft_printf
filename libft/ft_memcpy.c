/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:55:14 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/27 10:31:25 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_char;
	const char	*src_char;

	i = 0;
	dest_char = dest;
	src_char = src;
	if (!src && !dest)
	{
		return (NULL);
	}
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest_char);
}
