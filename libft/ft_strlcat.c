/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:14:55 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/11 13:48:15 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t	dst_l;
	size_t	src_l;
	
	src_l = 0;
	dst_l = 0;
	i = 0;
	while (dst_l < size && dst[dst_l] != '\0')
		dst_l++;
	while (src[src_l] != '\0')
		src_l++;
	if (size <= dst_l)
		return (size + src_l);
	if ((src_l + dst_l) >= size)
	{
		while (src[i] != '\0' && (dst_l + i + 1) < size - 1)
		{
			dst[dst_l + i] = src[i];
			i++;
		}
		dst[dst_l + i] = '\0';
	}
	return (dst_l + src_l);
}

int	main(void)
{
	char	dest1[20] = "Pinpin ";
	char	dest2[20] = "Pinpin ";
	char	src1[] = "le lapin";
	char	src2[] = "le lapin";
	size_t	size1;
	size_t	size2;

	size1 = ft_strlcat(dest1, src1, 20);		
	size2 = strlcat(dest2, src2, 20);
	printf("%s, %ld\n", dest1, size1);
	printf("%s, %ld\n", dest2, size2);
}
