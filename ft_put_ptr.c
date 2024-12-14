/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousuke <sousuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:45:07 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 02:34:40 by sousuke          ###   ########.fr       */
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
		count += ft_put_hex(i);
	}
	return (count);
}
