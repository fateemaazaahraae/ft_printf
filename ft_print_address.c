/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:18:36 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/26 20:51:27 by fbazaz           ###   ########.fr       */
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

int	ft_print_address(va_list list)
{
	void			*ptr;
	unsigned long	p;
	int				len;

	len = 0;
	ptr = va_arg(list, void *);
	len += write(1, "0x", 2);
	ft_print((unsigned long)ptr);
	p = (unsigned long)ptr;
	if (p == 0)
		len += 1;
	while (p != 0)
	{
		len++;
		p /= 16;
	}
	return (len);
}
