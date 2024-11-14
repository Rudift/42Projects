/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:36:58 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/07 11:38:53 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int character)
{
	if (character >= '0' && character <= '9')
		return (2048);
	return (0);
}
/*int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d\n", ft_isdigit(av[1][0]));
	printf("%d\n", isdigit(av[1][0]));
}*/
