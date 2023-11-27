/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:53:08 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/26 18:36:50 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(unsigned long num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num < 16)
		ft_putchar(hex[num]);
	else
	{
		ft_print(num / 16);
		ft_print(num % 16);
	}
}

int	ft_print_hexa_lower(va_list list)
{
	unsigned long	num;
	int				len;

	num = va_arg(list, unsigned long);
	len = ft_intlen(num, 16);
	ft_print(num);
	return (len);
}
