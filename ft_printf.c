/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:27:46 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/29 14:35:25 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "limits.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		n;
	int		result;

	n = 0;
	result = 0;
	va_start(ap, fmt);
	if (!fmt)
		return (-1);
	while (n >= 0 && *fmt)
	{
		if (*fmt != '%')
			result = ft_putchar(*fmt);
		else
		{
			fmt++;
			result = ft_format_handler(fmt, ap);
		}
		if (result < 0)
			return (-1);
		n += result;
		fmt++;
	}
	va_end(ap);
	return (n);
}
