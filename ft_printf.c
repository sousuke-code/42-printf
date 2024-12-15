/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:27:46 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 16:27:52 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "limits.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		n;

	n = 0;
	va_start(ap, fmt);
	while (n >= 0 && *fmt)
	{
		if (*fmt != '%')
		{
			n += ft_putchar(*fmt);
		}
		else
		{
			fmt++;
			n += ft_format_handler(fmt, ap);
		}
		fmt++;
	}
	va_end(ap);
	return (n);
}
