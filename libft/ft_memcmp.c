/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:38:56 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/12 09:56:22 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*s1c;
	const char	*s2c;

	i = 0;
	s1c = (const char *)s1;
	s2c = (const char *)s2;
	if (n < 1)
		return (0);
	while (i < (n - 1) && s1c[i] != '\0' && s2c[i] != '\0')
	{
		if (s1c[i] != s2c[i])
			return ((unsigned char)s1c[i] - (unsigned char)s2c[i]);
		i++;
	}
	return ((unsigned char)s1c[i] - (unsigned char)s2c[i]);
}
/*int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	printf("ft_memcmp :%d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("memcmp : %d\n", memcmp(av[1], av[2], atoi(av[3])));
	return (0);
}*/
