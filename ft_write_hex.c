/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:18:50 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/06 14:40:54 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_hex(unsigned int num, char flag)
{
	int		char_num;
	char	*hex;
	char	arr[9];
	int		i;

	char_num = 0;
	if (num == 0)
		return (ft_write_str("0"));
	if (flag == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	i = 8;
	arr[i] = '\0';
	while (num != 0)
	{
		arr[--i] = hex[num % 16];
		num /= 16;
	}
	return (ft_write_str(&arr[i]));
}
