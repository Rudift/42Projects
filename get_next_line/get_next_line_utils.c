/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:33:53 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/29 12:48:30 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (size && (nmemb > SIZE_MAX / size))
		return (NULL);
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero (s, nmemb * size);
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*scopy;

	i = 0;
	scopy = (unsigned char *)s;
	while (i < n)
	{
		scopy[i] = '\0';
		i++;
	}
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		tot_size;
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	tot_size = ft_strlen(s1, '0') + ft_strlen(s2, '0') + 1;
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
char	*append_buffer(char *basin_buffer, char *read_buffer)
{
	char *temp;

	temp = ft_strjoin(basin_buffer, read_buffer);
	free(basin_buffer);
	return (temp);
}

int	ft_strlen(const char *s, char param)
{
	int	i;

	i = 0;
	if (param == 'n')
	{
		while (s[i] != '\n')
			i++;
	}
	else
	{
		while (s[i] != '\0')
			i++;
	}
	return (i);
}