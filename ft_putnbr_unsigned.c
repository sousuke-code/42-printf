/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:45:22 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/24 17:46:07 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int i, int *count)
{
	if (i >= 10)
	{
		ft_putnbr_unsigned(i / 10, count);
	}
	ft_putchar(i % 10 + '0');
	(*count)++;
}
