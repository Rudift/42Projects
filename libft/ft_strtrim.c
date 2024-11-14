/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:50:35 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/12 16:08:29 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_nbocur(char const *str, char const c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			count ++;
		str++;
	}
	return (count);
}

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	ft_sizetrim(char const *s1, char const *set)
{
	int	i;
	int	supp_size;

	i = 0;
	supp_size = 0;
	while (set[i] != '\0')
	{
		supp_size += ft_nbocur(s1, set[i]);
		i++;
	}
	return (ft_strlen (s1) - supp_size);
}

static int	ft_isset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char *)malloc(ft_sizetrim(s1, set) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_isset(set, s1[i]) == 0)
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	return (res);
}
/*int	main(int ac, char **av)
{
	char	*str = ft_strtrim(av[1], av[2]);
	if (ac != 3)
		return (0);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
