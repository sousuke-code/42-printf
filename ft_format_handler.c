/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:27:35 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/29 14:24:28 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(const char *fmt, va_list ap)
{
	int	count;
	int	result;

	count = 0;
	result = 0;
	if (*fmt == 'c')
		result = ft_putchar((char)va_arg(ap, int));
	else if (*fmt == 's')
		result = ft_put_pointer_char(va_arg(ap, char *));
	else if (*fmt == 'd' || *fmt == 'i')
		result = ft_putnbr(va_arg(ap, int));
	else if (*fmt == 'u')
		result = ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (*fmt == 'x')
		result = ft_put_hex(va_arg(ap, unsigned int), 'x');
	else if (*fmt == 'X')
		result = ft_put_hex(va_arg(ap, unsigned int), 'X');
	else if (*fmt == '%')
		result = ft_put_per();
	else if (*fmt == 'p')
		result = ft_put_ptr((uintptr_t)va_arg(ap, void *));
	if (result < 0)
		return (-1);
	count += result;
	return (count);
}
