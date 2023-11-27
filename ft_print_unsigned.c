/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:20:51 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/26 17:44:34 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(unsigned int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_print(n / 10);
		ft_print(n % 10);
	}
}

int	ft_print_unsigned(va_list list)
{
	unsigned int	num;
	int				len;

	num = va_arg(list, unsigned int);
	len = 0;
	ft_print(num);
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}
