/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:35:33 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/24 17:44:20 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);

int		ft_format_handler(const char *fmt, va_list ap, int count);

void	ft_put_pointer_char(char *s, int *count);

void	ft_put_ptr(unsigned long long i, int *count);

void	ft_put_hex_upper(unsigned int i, int *count);

void	ft_put_hex(unsigned int i, int *count);

void	ft_putnbr_unsigned(unsigned int i, int *count);

void	ft_putnbr(int n, int *count);

void	ft_putchar(char c);

void	ft_put_per(int *count);

void	ft_put_hex_long(unsigned long long i, int *count);

#endif