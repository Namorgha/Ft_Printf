/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:37:28 by namorgha          #+#    #+#             */
/*   Updated: 2022/10/27 19:37:50 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_forma(va_list ptr, const char forma)
{
	int	count;

	count = 0;
	if (forma == 'c')
		count += ft_putchar(va_arg(ptr, int));
	else if (forma == 's')
		count += ft_printstr(va_arg(ptr, char *));
	else if (forma == 'd')
		count += ft_printnbr(va_arg(ptr, int));
	else if (forma == 'i')
		count += ft_printnbr(va_arg(ptr, int));
	else if (forma == 'x')
		count += ft_print_hex(va_arg(ptr, unsigned int), 'x');
	else if (forma == 'X')
		count += ft_print_hex(va_arg(ptr, unsigned int), 'X');
	else if (forma == 'u')
		count += ft_printnbr_u(va_arg(ptr, unsigned int));
	else if (forma == '%')
		count += ft_putchar('%');
	if (forma == 'p')
	{
		count += ft_printstr("0x");
		count += ft_address_hex(va_arg(ptr, unsigned long));
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ptr;
	int		counter;

	counter = 0;
	i = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			counter += ft_forma(ptr, str[i]);
		}
		else
			counter += ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return (counter);
}
