/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:45:01 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/06 22:51:32 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	ft_put_pointer_char(char *s)
{
	int count;
	count = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		count += 6;
	}
	else
	{
		while (*s)
		{
			write(1, s, 1);
			s++;
			count++;
		}
	}
	return count;
}
