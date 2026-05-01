/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:36:19 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/27 15:19:20 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*int_to_str(long num, int num_digits)
{
	char	*str;

	str = ft_calloc((num_digits + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	str[num_digits] = '\0';
	num_digits--;
	if (num == 0)
		str[num_digits] = '0';
	while (num > 0)
	{
		str[num_digits] = (num % 10) + '0';
		num = num / 10;
		num_digits--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	int		num_digits;
	char	*str;

	num = n;
	num_digits = 0;
	if (n <= 0)
	{
		num_digits++;
	}
	while (n != 0)
	{
		if (n != 0)
			num_digits++;
		n = n / 10;
	}
	str = int_to_str(num, num_digits);
	return (str);
}
