/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:12:35 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/24 17:44:03 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			ft_putchar(*fmt);
			n++;
		}
		else
		{
			fmt++;
			n = ft_format_handler(fmt, ap, n);
		}
		fmt++;
	}
	va_end(ap);
	return (n);
}
