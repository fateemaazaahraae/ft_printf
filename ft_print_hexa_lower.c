/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:53:08 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/27 15:32:06 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(unsigned int num)
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
	unsigned int	num;
	int				len;

	num = va_arg(list, unsigned int);
	len = 0;
	ft_print(num);
	if (num == 0)
		len++;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}
