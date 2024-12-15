/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:27 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 16:28:32 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(uintptr_t i)
{
	int	count;

	count = 0;
	if (!i)
	{
		write(1, "(nil)", 5);
		count += 5;
	}
	else
	{
		write(1, "0x", 2);
		count += 2;
		count += ft_put_hex_long(i);
	}
	return (count);
}
