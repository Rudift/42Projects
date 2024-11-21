/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:33:09 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/21 13:46:26 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_digit(long n, int base, char c)
{
  int   count;
  char  *symbols;
  
  if (c == 'X')
    symbols = "0123456789ABCDEF";
  else 
    symbols = "0123456789abcdef";
  if (n < 0)
  {
    write (1, "-", 1);
    return (ft_print_digit(-n, base, c) + 1);
  }
  else if (n < base)
  {
    return (ft_print_char(symbols[n]));
  }
  else 
  {
    count = ft_print_digit((n / base), base, c);
    return (count + ft_print_digit((n % base), base, c));
  }
}
