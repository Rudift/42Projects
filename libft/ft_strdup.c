/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:19:21 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/13 14:16:58 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		size;
	char	*res;
	int		i;

	i = 0;
	size = ft_strlen(s);
	res = (char *)malloc(size * sizeof(char));
	if (!res)
		return (NULL);
	while (i < size)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*int	main (int ac, char **av)
{
	if(ac != 2)
		return (0);
	char	*dup1;
	char	*dup2;

	dup1 = ft_strdup((const char *)av[1]);
	dup2 = strdup((const char *)av[1]);

	printf("ft_strdup : %s\n", dup1);
	printf("strdup : %s\n", dup2);
	free(dup1);
	free(dup2);
	return(0);
}*/
