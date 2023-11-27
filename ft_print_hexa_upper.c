/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:53:06 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/27 15:31:53 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(unsigned int num)
{
	char	*hexa_upper;

	hexa_upper = "0123456789ABCDEF";
	if (num < 16)
		ft_putchar(hexa_upper[num]);
	else
	{
		ft_print(num / 16);
		ft_print(num % 16);
	}
}

int	ft_print_hexa_upper(va_list list)
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
