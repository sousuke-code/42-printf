/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:44:29 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/24 17:47:17 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex_long(unsigned long long i, int *count)
{
	int	tmp;

	if (i >= 16)
	{
		ft_put_hex_long(i / 16, count);
	}
	tmp = i % 16;
	if (tmp < 10)
	{
		ft_putchar('0' + tmp);
		(*count)++;
	}
	else
	{
		ft_putchar('a' + (tmp - 10));
		(*count)++;
	}
}
