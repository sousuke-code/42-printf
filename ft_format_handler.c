/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:13:41 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/30 16:38:06 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(const char *fmt, va_list ap, int count)
{
	if (*fmt == 'c')
	{
		ft_putchar((char)va_arg(ap, int));
		count++;
	}
	else if (*fmt == 's')
		ft_put_pointer_char(va_arg(ap, char *), &count);
	else if (*fmt == 'd' || *fmt == 'i')
		ft_putnbr(va_arg(ap, int), &count);
	else if (*fmt == 'u')
		ft_putnbr_unsigned(va_arg(ap, unsigned int), &count);
	else if (*fmt == 'x')
		ft_put_hex(va_arg(ap, unsigned int), &count);
	else if (*fmt == 'X')
		ft_put_hex_upper(va_arg(ap, unsigned int), &count);
	else if (*fmt == '%')
		ft_put_per(&count);
	else if (*fmt == 'p')
		ft_put_ptr((uintptr_t)va_arg(ap, void *), &count);
	return (count);
}
