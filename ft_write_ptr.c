/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:57:56 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/05 18:39:24 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_hex(uintptr_t num)
{
	int		char_num;
	char	*hex;
	char	arr[21];
	int		i;

	char_num = 0;
	hex = "0123456789abcdef";
	i = 20;
	arr[i] = '\0';
	while (num != 0)
	{
		arr[--i] = hex[num % 16];
		num /= 16;
	}
	char_num += ft_write_str("0x");
	char_num += ft_write_str(&arr[i]);
	return (char_num);
}

int	ft_write_ptr(uintptr_t ptr)
{
	int			char_num;

	char_num = 0;
	if (!ptr)
		return (ft_write_str("(nil)"));
	char_num += print_hex(ptr);
	return (char_num);
}
