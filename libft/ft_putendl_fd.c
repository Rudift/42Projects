/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:38:03 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/14 15:45:55 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write (fd, s, len);
	write (fd, "\n", 1);
}
/*int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	ft_putendl_fd (av[1], atoi(av[2]));
	return (0);
}*/	
