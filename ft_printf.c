/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:58:15 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/05 19:20:48 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	interpret_flag(char c, va_list arg)
{
	int			char_num;

	char_num = 0;
	if (c == 'c')
		char_num += ft_write_char(va_arg(arg, int));
	else if (c == 's')
		char_num += ft_write_str(va_arg(arg, char *));
	else if (c == 'p')
	{
		char_num += ft_write_ptr(va_arg(arg, uintptr_t));
	}
	else if (c == 'i' || c == 'd')
	{
		char_num += ft_write_num(va_arg(arg, int));
	}
	else if (c == 'u')
	{
		char_num += ft_write_unsigned(va_arg(arg, unsigned int));
	}
	else if (c == 'x' || c == 'X')
		char_num += ft_write_hex(va_arg(arg, unsigned int));
	else if (c == '%')
		char_num += ft_write_char(c);
	return (char_num);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		char_num;

	i = 0;
	va_start(args, format);
	char_num = 0;
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;
			char_num += interpret_flag(format[i], args);
		}
		else
			char_num += ft_write_char(format[i]);
		i++;
	}
	va_end(args);
	return (char_num);
}

/* int main()
{
	int i = 10;
	ft_printf("%p\n", -1);
}  */