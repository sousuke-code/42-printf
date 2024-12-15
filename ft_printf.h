/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:27:56 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/12/15 16:27:59 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <inttypes.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *fmt, ...);

int	ft_format_handler(const char *fmt, va_list ap);

int	ft_put_pointer_char(char *s);

int	ft_put_ptr(uintptr_t i);

int	ft_put_hex(unsigned int i, char fmt);

int	ft_put_hex_long(uintptr_t i);

int	ft_putnbr_unsigned(unsigned int i);

int	ft_putnbr(int n);

int	ft_putchar(char c);

int	ft_put_per(void);

#endif
