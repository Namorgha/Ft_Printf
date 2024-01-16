/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:10:40 by namorgha          #+#    #+#             */
/*   Updated: 2022/10/27 19:31:56 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_print_hex(unsigned int n, char c);
int	ft_address_hex(unsigned long n);
int	ft_printnbr_u(unsigned int n);
int	ft_printf(const char *str, ...);
int	ft_printstr(char *str);
int	ft_printnbr(long n);

#endif
