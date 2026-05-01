/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:06:47 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/24 15:56:00 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*mem1;
	unsigned char	*mem2;

	i = 0;
	mem1 = (unsigned char *) s1;
	mem2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while ((mem1[i] == mem2[i]) && (i < n - 1))
	{
		i++;
	}
	return (mem1[i] - mem2[i]);
}
