/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:40 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/12 14:25:13 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*res;

	i = 0;
	res = (char *)malloc(len * sizeof(int));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
/*int	main(int ac, char **av)
{
	char	*sub1;

	if(ac != 4)
	 return (0);
	sub1 = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
	printf("ft_substr : %s", sub1);
	free(sub1);
	return (0);
}*/
