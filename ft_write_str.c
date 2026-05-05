/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:20:33 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/05 16:54:32 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_str(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (ft_strlen("(null)"));
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
