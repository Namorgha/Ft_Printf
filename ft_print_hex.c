/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:27:34 by namorgha          #+#    #+#             */
/*   Updated: 2022/10/23 19:54:08 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, const char c)
{
	int		count;
	char	*hex;

	count = (0);
	if (c == 'x')
		hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_print_hex(n / 16, c);
	count += ft_putchar(hex[(n % 16)]);
	return (count);
}

int	ft_address_hex(unsigned long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_address_hex(n / 16);
	count += ft_putchar(hex[(n % 16)]);
	return (count);
}
