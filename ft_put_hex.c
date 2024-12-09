/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:44:41 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/06 23:06:57 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	ft_put_hex(unsigned int i)
{
	int	tmp;
	int count;

	count = 0;

	if (i >= 16)
	{
		count += ft_put_hex(i / 16);
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
	return count;
}
