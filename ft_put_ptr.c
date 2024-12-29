/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:27 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/29 14:29:11 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(uintptr_t i)
{
	int	count;
	int	result;

	result = 0;
	count = 0;
	if (!i)
	{
		if (write(1, "(nil)", 5) < 0)
			return (-1);
		count += 5;
	}
	else
	{
		if (write(1, "0x", 2) < 0)
			return (-1);
		count += 2;
		result = ft_put_hex_long(i);
	}
	if (result < 0)
		return (-1);
	count += result;
	return (count);
}
