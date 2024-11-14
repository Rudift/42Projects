/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:52:54 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/07 11:55:20 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int character)
{
	if (character >= 0 && character <= 127)
		return (1);
	return (0);
}
/*int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d\n", ft_isascii(av[1][0]));
	printf("%d\n", isascii(av[1][0]));
}*/
