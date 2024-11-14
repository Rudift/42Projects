/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:52:24 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/14 16:11:56 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n == 2147483647)
	{
		ft_putchar_fd ('2', fd);
		ft_putnbr_fd (147483647, fd);
	}
	if (n > 9)
	{
		ft_putchar_fd ((n % 10) + 48, fd);
		ft_putnbr_fd (n / 10, fd);	
	}
	else
		ft_putchar_fd ((n % 10) + 48, fd);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ft_putnbr_fd (atoi(av[1]), atoi(av[2]));
	return (0);
}
