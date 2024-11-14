/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:25:37 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/12 14:49:53 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		tot_size;
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	tot_size = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(tot_size * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
	{	
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{	
		res[i + j] = s2[j];
		j++;
	}
	return (res);
}
/*int	main(int ac, char **av)
{
	char	*str;

	if (ac != 3)
		return(0);
	str = ft_strjoin(av[1], av[2]);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
