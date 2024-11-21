/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:10:10 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/21 13:58:19 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
  va_list args;
  int     count;

  va_start(args, format);
  count = 0;
  while (*format != '\0')
  {
    if (*format == '%')
      count += ft_print_format(*(++format), args);
    else
      count += write(1, format, 1);
    ++format;
  }
  return count;
}
/*
int main(void)
{
  int  count;

  ft_printf("Hello %s, today is %d, in hex %X, char -> %c\n", "Val", 27, 27, 'z');
  return (0);
}
*/
