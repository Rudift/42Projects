/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:43:04 by vdeliere          #+#    #+#             */
/*   Updated: 2024/11/21 13:43:02 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

/*Principale*/
int ft_printf(const char *, ...);
/*Fonction de triage*/
int	ft_print_format(char spec, va_list ap);
/*Fonctions specs*/
int	ft_print_char(int c);
int	ft_print_str(char* s);
int ft_print_digit(long n, int base, char c);
int ft_print_digit(long n, int base, char c);
int ft_print_pnt(void *pnt);


#endif
