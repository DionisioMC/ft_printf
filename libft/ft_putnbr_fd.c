/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:10:02 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/28 12:00:12 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	num;

	num = n;
	if (fd == -1)
		return ;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num < 10)
	{
		c = num + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}
