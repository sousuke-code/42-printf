/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:49 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 16:28:53 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	long	long_n;

	count = 0;
	long_n = n;
	if (long_n < 0)
	{
		ft_putchar('-');
		long_n = -long_n;
		count++;
	}
	if (long_n >= 10)
	{
		count += ft_putnbr(long_n / 10);
	}
	ft_putchar(long_n % 10 + '0');
	count++;
	return (count);
}
