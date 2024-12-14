/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousuke <sousuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:44:41 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 02:36:06 by sousuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int i, char fmt)
{
	int	tmp;
	int	count;

	count = 0;
	if (i >= 16)
	{
		count += ft_put_hex(i / 16, fmt);
	}
	tmp = i % 16;
	if (tmp < 10)
	{
		count += ft_putchar('0' + tmp);
	}
	else
	{
		if (fmt == 'x')
			count += ft_putchar('a' + (tmp - 10));
		else if (fmt == 'X')
			count += ft_putchar('A' + (tmp - 10));
	}
	return (count);
}
