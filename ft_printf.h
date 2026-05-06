/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:51:52 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/06 11:26:34 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_write_char(char c);
int	ft_write_str(char *str);
int	ft_write_ptr(uintptr_t ptr);
int	ft_write_num(int num);
int	ft_write_unsigned(unsigned int num);
int	ft_write_hex(unsigned int num, char flag);

#endif