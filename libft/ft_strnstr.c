/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:58:42 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/12 10:44:47 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (little[j] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	printf("ft_strnstr : %s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	printf("strstr : %s\n", strstr(av[1], av[2]));
	return (0);
}*/
#include <stdio.h>
#define TEST "bonjour", "our", 7
#define TEST1 "bonjour", "our", 8
#define TEST2 "bonjourgggg", "our", 10
#define TEST3 "our", "bonjourgggg", -1
int main(){

    char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";

char bonjour[100] = "aaaa";
char * empty = (char*)"";
printf("%d\n", ft_strnstr(empty, "", -1));
printf("%d\n", strnstr(empty, "", -1));

printf("%d\n", ft_strnstr(empty, "", -1));
printf("%d\n", strnstr(empty, "", -1));

printf("%d\n", ft_strnstr(haystack, needle, 0));
printf("%d\n", strnstr(haystack, needle, 0));

printf("%d\n", ft_strnstr(haystack, "cd", 8));
printf("%d\n", strnstr(haystack, "cd", 8));

//printf("%d\n", ft_strnstr(empty, -1, ""));
//printf("%d\n", strnstr(empty, -1, ""));

printf("%d\n", ft_strnstr(bonjour, bonjour, 10000));
printf("%d\n", strnstr(bonjour, bonjour, 10000));

printf("%d\n", ft_strnstr(haystack, "a", 1));
printf("%d\n", strnstr(haystack, "a", 1));

printf("%d\n", ft_strnstr(TEST));
printf("%d\n", strnstr(TEST));

printf("%d\n", ft_strnstr(TEST1));
printf("%d\n", strnstr(TEST1));

printf("%d\n", ft_strnstr(TEST2));
printf("%d\n", strnstr(TEST2));

printf("%d\n", ft_strnstr(TEST3));
printf("%d\n", strnstr(TEST3));
}
