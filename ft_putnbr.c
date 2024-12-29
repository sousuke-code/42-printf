/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:49 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/29 14:29:54 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	int		result;
	long	long_n;

	count = 0;
	result = 0;
	long_n = n;
	if (long_n < 0)
	{
		if (ft_putchar('-') < 0)
			return (-1);
		long_n = -long_n;
		count++;
	}
	if (long_n >= 10)
	{
		result = ft_putnbr(long_n / 10);
		if (result < 0)
			return (-1);
		count += result;
	}
	if (ft_putchar(long_n % 10 + '0') < 0)
		return (-1);
	count++;
	return (count);
}
