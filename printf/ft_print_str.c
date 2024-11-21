/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:00:05 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/21 13:59:53 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *str)
{
  int count;

  count = 0;
  while (*str)
  {
    ft_print_char((int)*str);
    ++count;
    ++str;
  }
  return(count);
}
