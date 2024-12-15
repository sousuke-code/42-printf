/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:29:11 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 16:29:17 by sosmiyat         ###   ########.fr       */
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
