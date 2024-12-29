/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:29:11 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/29 14:50:54 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int i, char fmt)
{
	int	count;
	int	result;

	count = 0;
	result = 0;
	if (i >= 16)
	{
		result = ft_put_hex(i / 16, fmt);
		if (result < 0)
			return (-1);
		count += result;
	}
	if ((i % 16) < 10)
		result = ft_putchar('0' + (i % 16));
	else
	{
		if (fmt == 'x')
			result = ft_putchar('a' + ((i % 16) - 10));
		else if (fmt == 'X')
			result = ft_putchar('A' + ((i % 16) - 10));
	}
	if (result < 0)
		return (-1);
	count += result;
	return (count);
}
