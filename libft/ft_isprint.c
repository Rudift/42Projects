/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:59:53 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/07 12:07:10 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int character)
{
	if ((character >= 0 && character <= 31) || character == 127)
		return (0);
	else
		return (16384);
}
/*int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d\n", ft_isprint(av[1][0]));
	printf("%d\n", isprint(av[1][0]));
}*/
