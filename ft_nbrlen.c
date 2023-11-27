/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:28:53 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/26 14:24:07 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(int n, int base)
{
	int	num_len;

	num_len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		num_len++;
	while (n != 0)
	{
		num_len++;
		n /= base;
	}
	return (num_len);
}
