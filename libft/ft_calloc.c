/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:42:17 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/15 14:58:52 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*res;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	while (i < nmemb)
	{
		res[i] = 0;
		i++;
	}
	return ((void *)res);
}
/*int	main(void)
{
	int	*tab1 = (int *)ft_calloc(10, sizeof(int));
	int	*tab2 = (int *)calloc(10, sizeof(int));
	size_t	i = 0;

	printf("ft_calloc :\n");
	while (i < 10)
	{
		printf("%d\n", tab1[i]);
		i++;
	}
	printf("calloc :\n");
	i = 0;
	while (i < 10)
	{
		printf("%d\n", tab2[i]);
		i++;
	}
	free(tab1);
	free(tab2);
}*/
