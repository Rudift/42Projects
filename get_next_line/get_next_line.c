/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:33:44 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/29 10:14:34 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *basin_buffer)
{
	char	*temp;

	char
	printf("extract_line :%s(*)\n)", basin_buffer);
	return(basin_buffer);
}

char	*obtain_remaining(char *basin_buffer)
{
	printf("obtain_remaining :%s(*)\n)", basin_buffer);
	return (basin_buffer);
}

static char	*read_from_file(char *basin_buffer, int fd)
{
	int			bytes_read;
	char 			*cup_buffer;

	cup_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!cup_buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, cup_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(cup_buffer), NULL);
		cup_buffer[bytes_read] = '\0';
		basin_buffer = append_buffer(basin_buffer, cup_buffer);
		if(ft_strchr(basin_buffer, '\n'))
			break ;
	}
	free (cup_buffer);
	return (basin_buffer);
}

char	*get_next_line(int fd)
{
	static char	*basin_buffer;
	char			*line;

	if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!basin_buffer)
		basin_buffer = ft_calloc(1, sizeof (char));
	if (!ft_strchr(basin_buffer, '\n'))
		basin_buffer = read_from_file(basin_buffer, fd);
	if (!basin_buffer)
		return (free(basin_buffer), NULL);
	line = extract_line(basin_buffer);
	basin_buffer= obtain_remaining(basin_buffer);
	return (line);
}

int	main(void)
{
	int	fd;
	char	*next_line;
	int	count;

	count = 0;
	fd = open ("test.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	while (1)
	{
		next_line = get_next_line(fd);
		if (next_line == NULL)
			break;
		count ++;
		printf("[%d]:%s\n", count, next_line);
		free(next_line);
		next_line = NULL;
	}
	close(fd);
	return (0);
}
