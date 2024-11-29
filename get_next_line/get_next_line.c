/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:33:44 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/29 13:07:11 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *basin_buffer)
{
	char	*temp;
	int	i;

	temp = (char *)malloc((ft_strlen(basin_buffer, 'n') + 2) * sizeof(char));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(basin_buffer, 'n')) + 2)
	{
		temp[i] = basin_buffer[i];
		i++;
	}
	temp[i] = '\0';
	return(temp);
}

char	*obtain_remaining(char *basin_buffer)
{
	char	*temp;

	basin_buffer = ft_strchr(basin_buffer, '\n');
	basin_buffer++;
	temp = (char *)malloc((ft_strlen(basin_buffer, '0') + 1) * sizeof(char));
	temp = basin_buffer;
	//temp++;
	//*temp = '\0';
	printf("(*)%s(*)\n", temp);
	//free (basin_buffer);
	return (temp);
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
		printf("reading : %s\n", basin_buffer);
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
	printf("reste : %s\n", basin_buffer);
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
		printf("next line free\n");
		next_line = NULL;
	}
	close(fd);
	return (0);
}
