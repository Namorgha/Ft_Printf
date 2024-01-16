/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:10:15 by namorgha          #+#    #+#             */
/*   Updated: 2022/10/23 20:15:31 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!str)
		tmp = "(null)";
	else
		tmp = str;
	while (tmp[i])
	{
		ft_putchar(tmp[i]);
		i++;
	}
	return (i);
}
