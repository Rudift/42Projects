/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:23:11 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/08 13:51:01 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int	main(int ac, char **av)
{
	char	dest[100];

	if (ac != 3)
		return (0);
	memcpy (dest, av[1], atoi(av[2]));
	printf("%s", dest);
	return (0);		
}*/