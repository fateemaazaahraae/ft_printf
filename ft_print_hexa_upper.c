/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_HEXA.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:53:06 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/26 14:29:06 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(int num)
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
	int	num;
	int	len;

	num = va_arg(list, unsigned int);
	len = ft_intlen(num, 16);
	ft_print(num);
	return (len);
}
