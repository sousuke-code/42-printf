/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:35:33 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/22 23:47:43 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>


int	ft_printf(const char *fmt, ...);

int	format_handler(const char *fmt, va_list ap, int count);


void ft_put_ptr(unsigned long long i, int *count);

void ft_put_hex_upper(unsigned int i, int *count);

void ft_put_hex(unsigned int i, int *count);

void ft_putnbr_unsigned(unsigned int i, int *count);

void	ft_putnbr(int n, int *count);

void	ft_putchar(char c);



#endif