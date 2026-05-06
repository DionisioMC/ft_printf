/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:55:53 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/06 11:28:26 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*int_to_str(unsigned int num, int num_digits)
{
	char	*str;

	str = ft_calloc((num_digits + 1), sizeof(char));
	if (!str)
		return (NULL);
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

char	*ft_itoa_unsigned(unsigned int n)
{
	unsigned int	num;
	int				num_digits;
	char			*str;

	num = n;
	num_digits = 0;
	if (n == 0)
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

int	ft_write_unsigned(unsigned int num)
{
	char	*str;
	int		char_num;

	char_num = 0;
	str = ft_itoa_unsigned(num);
	char_num += ft_write_str(str);
	free(str);
	return (char_num);
}
