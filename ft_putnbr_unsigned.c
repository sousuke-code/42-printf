/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:42 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/29 14:29:36 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int i)
{
	int	count;
	int	result;

	result = 0;
	count = 0;
	if (i >= 10)
	{
		result = ft_putnbr_unsigned(i / 10);
		if (result < 0)
			return (-1);
		count += result;
	}
	if (ft_putchar(i % 10 + '0') < 0)
		return (-1);
	count++;
	return (count);
}
