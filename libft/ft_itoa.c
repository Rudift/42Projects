/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:15:16 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/15 17:47:56 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizeint(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*ft_mallocator(int size)
{
	char	*str;

	str = (char *) malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		neg;
	int		i;

	i = 0;
	neg = 0;
	size = ft_sizeint (n);
	printf("%d\n", size);
	str = ft_mallocator (size);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		neg = 1;
		i++;
	}
	str[size] = '\0';
	while (i < size)
	{
		str[size - i - 1 + neg] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	char	*str;

	if (ac != 2)
		return (0);
	str = ft_itoa(atoi(av[1]));
	printf("taille de l'int : %d\n", ft_sizeint(atoi(av[1])));
	printf("%s\n", str);
	free (str);
	return (0);
}
