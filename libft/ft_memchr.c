/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:45:36 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/15 14:50:31 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*tab;

	i = 0;
	tab = (const char *)s;
	while (i < n)
	{
		if (*tab == c)
			return ((void *)tab);
		tab ++;
		i++;
	}
	return (NULL);
}
/*int	main(int ac, char **av)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i = 2;
	int	range = 4;
	if (ac != 4)
		return (0);
	printf("test1 :\n");
	printf("ft_memchr : %s\n", (char *)ft_memchr(av[1], av[2][0], atoi(av[3])));
	printf("memchr : %s\n", (char *)memchr(av[1], av[2][0], atoi(av[3])));
	return (0);
}*/
