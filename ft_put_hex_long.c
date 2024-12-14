/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousuke <sousuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:44:29 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 02:35:57 by sousuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_long(uintptr_t i)
{
	int	tmp;
	int	count;

	count = 0;
	if (i >= 16)
	{
		count += ft_put_hex_long(i / 16);
	}
	tmp = i % 16;
	if (tmp < 10)
	{
		count += ft_putchar('0' + tmp);
	}
	else
	{
		count += ft_putchar('a' + (tmp - 10));
	}
	return (count);
}
