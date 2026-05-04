/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:58:15 by dcoelho           #+#    #+#             */
/*   Updated: 2026/05/04 17:59:51 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_hex(uintptr_t num)
{
	int		char_num;
	char	*hex;
	char	arr[21];
	int		i;

	
	char_num = 2;
	hex = "0123456789abcdef";
	i = 21;
	arr[--i] = '\0';
	while (num != 0)
	{
		arr[i] = hex[num % 16];
		num /= 16;
		char_num++;
		i--;
	}
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(&arr[i + 1], 1);
	return (char_num);
}

int	print_ptr(uintptr_t ptr)
{
	int			char_num;
	char		*str;

	char_num = 0;
	if (!ptr)
	{
		str = "(nil)";
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	char_num += print_hex(ptr);
	return (char_num);
}

int	interpret_flag(char c, va_list arg)
{
	char		*str;
	int			char_num;
	uintptr_t	ptr;

	char_num = 0;
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(arg, int), 1);
		char_num++;
	}
	else if (c == 's')
	{
		str = va_arg(arg, char *);
		ft_putstr_fd(str, 1);
		char_num += ft_strlen(str);
	}
	else if (c == 'p')
	{
		ptr = va_arg(arg, uintptr_t);
		print_ptr(ptr);
	}
	else if (c == 'i' || c == 'd')
	{
		str = ft_itoa(va_arg(arg, int));
		ft_putstr_fd(str, 1);
		char_num += ft_strlen(str);
		free(str);
	}
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		char_num++;
	}
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
			interpret_flag(format[i], args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			char_num++;
		}
		i++;
	}
	va_end(args);
	return (char_num);
}

/* int main()
{
	int i = 2;
	ft_printf("%p\n", &i);
	printf("%p\n", &i);
} */