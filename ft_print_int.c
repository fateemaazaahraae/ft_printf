/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:58:47 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/26 14:32:30 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n == 2147483647)
		write(1, "2147483647", 10);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		print(n / 10);
		print(n % 10);
	}
}

int	ft_print_int(va_list list)
{
	int	n;
	int	len;

	n = va_arg(list, int);
	len = ft_intlen(n, 10);
	print(n);
	return (len);
}
