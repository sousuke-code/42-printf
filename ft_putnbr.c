/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousuke <sousuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:45:27 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 09:53:43 by sousuke          ###   ########.fr       */
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
