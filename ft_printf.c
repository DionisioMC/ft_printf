/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:58:15 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/01 16:21:43 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	interpret_flag(char c, va_list arg)
{
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(arg, int), 1);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int 	i;
	char	*str;

	i = 0;
	str = "Hello";
	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;
			interpret_flag(format[i], args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (1);
}

int main()
{
	ft_printf("%c", 'd');
}