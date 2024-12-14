/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousuke <sousuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:45:22 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 02:26:33 by sousuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int i)
{
	int	count;

	count = 0;
	if (i >= 10)
	{
		count += ft_putnbr_unsigned(i / 10);
	}
	ft_putchar(i % 10 + '0');
	count++;
	return (count);
}
