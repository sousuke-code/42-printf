/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:45:27 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/06 22:54:23 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	ft_putnbr(int n)
{
	int count;
	long	ln;

	count = 0;
	ln = n;
	if (ln < 0)
	{
		ft_putchar('-');
		ln = -ln;
		count++;
	}
	if (ln >= 10)
	{
		count += ft_putnbr(ln / 10);
	}
	ft_putchar(ln % 10 + '0');
	count++;
	return count;
}
