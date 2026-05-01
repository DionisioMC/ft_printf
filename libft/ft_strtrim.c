/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:10:41 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/23 17:51:17 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return ((char *)s1);
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
	{
		start++;
	}
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end - 1]) && end > start)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}

/* int main() {
	char s1[] = " lorem ipsum dolor sit amet";
    char *strtrimm = ft_strtrim(s1, "l ");
	printf("%s/n", strtrimm);
} */