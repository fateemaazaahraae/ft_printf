/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:53:12 by fbazaz            #+#    #+#             */
/*   Updated: 2023/12/03 09:39:02 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list list)
{
	int	len;

	if (c == '%')
		len = ft_print_per();
	else if (c == 'i' || c == 'd')
		len = ft_print_int(list);
	else if (c == 'c')
		len = ft_print_char(list);
	else if (c == 'u')
		len = ft_print_unsigned(list);
	else if (c == 's')
		len = ft_print_str(list);
	else if (c == 'x')
		len = ft_print_hexa_lower(list);
	else if (c == 'X')
		len = ft_print_hexa_upper(list);
	else if (c == 'p')
		len = ft_print_address(list);
	else
	{
		len = ft_print_per();
		len += ft_putchar(c);
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, s);
	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i = i + 1;
			if (s[i] == '\0' || s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
				break ;
			len += ft_check(s[i], args);
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
