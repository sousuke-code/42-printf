/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:19 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/29 14:29:27 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer_char(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		if (write(1, "(null)", 6) < 0)
			return (-1);
		count += 6;
	}
	else
	{
		while (*s)
		{
			if (write(1, s, 1) < 0)
				return (-1);
			s++;
			count++;
		}
	}
	return (count);
}
