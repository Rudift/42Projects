/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:06:23 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/21 13:48:51 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_pnt(void *pnt)
{
  int count;

  count = 0;
  if (!pnt)
    return (write (1, "(nil)", 5));
  count += ft_print_char ('0');
  count += ft_print_char ('x');
  count += ft_print_digit ((unsigned long)pnt, 16, 'x');
  return (count);
}