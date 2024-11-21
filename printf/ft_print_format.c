/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:17:23 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/21 13:50:30 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_format(char spec, va_list ap)
{
  int count;

  count = 0;
  if (spec == 'c')
    count += ft_print_char(va_arg(ap, int));
  else if (spec == 's')
    count += ft_print_str(va_arg(ap, char *));
  else if (spec == 'p')
    count += ft_print_pnt(va_arg(ap, void *));
  else if (spec == 'd')
    count += ft_print_digit((long)va_arg(ap, int), 10,  'd');
  else if (spec == 'i')
    count += ft_print_digit((long)va_arg(ap, int), 10, 'i');
  else if (spec == 'x')
    count += ft_print_digit((long)va_arg(ap, unsigned int), 16, 'x');
  else if (spec == 'X')
    count += ft_print_digit((long)va_arg(ap, unsigned int), 16, 'X');
  else if (spec == 'u')
    count += ft_print_digit((long)va_arg(ap, unsigned int), 10, 'u');
  else if (spec == '%')
    count += write (1, "%", 1);
  else
    count += write(1, &spec, 1);
  return (count);
}
