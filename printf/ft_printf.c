/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:10:10 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/20 11:16:13 by vdeliere         ###   ########.fr       */
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
      count += print_format(*(++format), args);
    else
      count += write(1, format, 1);
    ++format;
  }
  return count;
}

int main(void)
{
  return (0);
} 