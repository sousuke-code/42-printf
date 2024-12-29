/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:04 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/29 14:29:17 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_long(uintptr_t i)
{
	int	tmp;
	int	count;
	int	result;

	count = 0;
	if (i >= 16)
	{
		result = ft_put_hex_long(i / 16);
		if (result < 0)
			return (-1);
		count += result;
	}
	tmp = i % 16;
	if (tmp < 10)
	{
		result = ft_putchar('0' + tmp);
	}
	else
	{
		result = ft_putchar('a' + (tmp - 10));
	}
	if (result < 0)
		return (-1);
	count += result;
	return (count);
}
