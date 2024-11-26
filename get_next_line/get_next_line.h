/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:19:01 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/26 13:28:55 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define FT_PRINTF_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
 
# include <stdlib.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char				*str_buf;
	struct s_list	*next;
}					t_list;

/*Principale*/
char	*get_next_line(int fd);

/*Secondaires*/
void	list_creator(t_list **list, int fd);
void	append(t_list **list, char *buf);
int	len_to_newline(t_list *list);

#endif