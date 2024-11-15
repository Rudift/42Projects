/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:17:48 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/15 14:47:09 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("%s\n", ft_strchr(av[1], av[2][0])); 
	printf("%s\n", strchr(av[1], av[2][0]));
	return (0); 
}*/
