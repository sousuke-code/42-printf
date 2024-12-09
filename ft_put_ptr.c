/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:45:07 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/06 23:00:31 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	ft_put_ptr(uintptr_t i)
{
	int count;
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
	return count;
}
