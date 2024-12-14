/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousuke <sousuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:13:41 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 02:28:07 by sousuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(const char *fmt, va_list ap)
{
	int	count;

	count = 0;
	if (*fmt == 'c')
		count += ft_putchar((char)va_arg(ap, int));
	else if (*fmt == 's')
		count += ft_put_pointer_char(va_arg(ap, char *));
	else if (*fmt == 'd' || *fmt == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (*fmt == 'u')
		count += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (*fmt == 'x')
		count += ft_put_hex(va_arg(ap, unsigned int), 'x');
	else if (*fmt == 'X')
		count += ft_put_hex(va_arg(ap, unsigned int), 'X');
	else if (*fmt == '%')
		count += ft_put_per();
	else if (*fmt == 'p')
		count += ft_put_ptr((uintptr_t)va_arg(ap, void *));
	return (count);
}
