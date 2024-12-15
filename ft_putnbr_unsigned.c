/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:42 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 16:28:45 by sosmiyat         ###   ########.fr       */
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
