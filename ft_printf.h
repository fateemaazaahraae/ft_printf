/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:11:05 by fbazaz            #+#    #+#             */
/*   Updated: 2023/11/26 18:19:37 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_print_per(void);
int	ft_print_char(va_list list);
int	ft_print_str(va_list list);
int	ft_print_int(va_list list);
int	ft_intlen(int n, int base);
int	ft_print_hexa_lower(va_list list);
int	ft_print_hexa_upper(va_list list);
int	ft_print_unsigned(va_list list);
int	ft_print_address(va_list list);

#endif
