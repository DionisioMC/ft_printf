/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:44:56 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/06 11:28:06 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_num(int num)
{
	char	*str;
	int		char_num;

	char_num = 0;
	str = ft_itoa(num);
	char_num += ft_write_str(str);
	free(str);
	return (char_num);
}
