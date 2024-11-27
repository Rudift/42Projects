/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:33:44 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/27 14:55:22 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		buffer;
	int			bytes_read;

	stash = (char *)malloc(sizeof(char *));
	if (stash == NULL)
		return (NULL);
	bytes_read = 1;
	while (stash_checker(stash) != 1 && bytes_read != 0)
	{
		bytes_read = read (fd, buffer, BUFFER_SIZE);
		stash = ft_strjoin (stash, buffer);
	}
	line = ft_strdup (stash);
	stash_cleaner (stash);
	if (bytes_read == 0)
	{
		free (line);
		return (free (stash), stash = NULL);
	}
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open ("./test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Erreur d'ouverture du fichier\n");
		return (0);
	}
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	close (fd);
}
