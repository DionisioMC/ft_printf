/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:40:32 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/25 19:27:37 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *) big);
	}
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
