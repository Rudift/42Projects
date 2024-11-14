/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:15:16 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/13 18:57:09 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_sizeint(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
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
	str = (char *) malloc(size * sizeof(char));
	if (!str)
		return (NULL);
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
