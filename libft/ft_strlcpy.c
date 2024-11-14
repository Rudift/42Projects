/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:55:21 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/11 12:12:35 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	if (siz == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (src[i] != '\0' && (i < siz - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*int	main(int ac, char **av)
{
	char	dest1[atoi(av[2])];
	char	dest2[atoi(av[2])];
	int		size1;
	int		size2;

	if (ac != 3)
		return (0);
	size1 = ft_strlcpy(dest1, av[1], atoi(av[2]));
	size2 = strlcpy(dest2, av[1], atoi(av[2]));
	printf("la copie de %s via ft_strlcpy est : %s\n size : %d\n", av[1], dest1, size1);
	printf("la copie de %s via strlcpy est : %s\n size : %d\n", av[1], dest2, size2);
	return(0);
}*/
