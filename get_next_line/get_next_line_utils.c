/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:33:53 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/27 14:29:29 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		tot_size;
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	tot_size = ft_strlen(s1) + ft_strlen(s2) + 1;
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
	res[i + j] = '\0';
	return (res);
}

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	stash_checker(char *stash)
{
	int	i;

	i = 0;
	while (stash[i] != 0)
	{
		if (stash[i] == '\n')
		{
			return (1);
			printf("saut de ligne\n");
		}
		i++;
	}
	return (0);
	printf("$\n");
}

char	*stash_cleaner(char *stash)
{
	int		i;
	int		j;
	char	*temp;

	temp = (char *)malloc(sizeof(char *));
	if (temp == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (stash[i] != '\n')
		i++;
	while (stash[i] != '\0')
		temp[j++] = stash[i++];
	stash = temp;
	free (temp);
	return (stash);
}

char	*ft_strdup(char *s)
{
	char		*str;
	int			srcl;
	size_t		i;

	i = 0;
	srcl = ft_strlen(s);
	str = (char *)malloc((srcl + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && s[i] != '\n')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
