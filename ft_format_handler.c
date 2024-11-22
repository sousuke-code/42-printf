
#include "ft_printf.h"

int	format_handler(const char *fmt, va_list ap, int count)
{
	char c;
	char *s;
	int i;
	unsigned int ui;
	unsigned long long pi;

	if (*fmt == 'c')
	{
		c = (char)va_arg(ap, int);
		ft_putchar(c);
		count++;
	}
	else if (*fmt == 's')
	{
		s = va_arg(ap, char *);
		if (!s)
			s = "(null)";
		while (*s)
		{
			ft_putchar(*s);
			s++;
			count++;
		}
	}
	else if (*fmt == 'd' || *fmt == 'i')
	{
		i = va_arg(ap, int);
		ft_putnbr(i, &count);
	}
	else if (*fmt == 'u')
	{
		ui = va_arg(ap, unsigned int);
		ft_putnbr_unsigned(ui, &count);
	}
	else if (*fmt == 'x')
	{
		ui = va_arg(ap, unsigned int);
		ft_put_hex(ui, &count);
	}
	else if (*fmt == 'X')
	{
		ui = va_arg(ap, unsigned int);
		ft_put_hex_upper(ui, &count);
	}
	else if (*fmt == '%')
	{
		write(1, "%%", 1);
		count++;
	}
	else if (*fmt == 'p')
	{
		pi = (unsigned long long)va_arg(ap, void *);
		write(1, "0x", 2);
		count += 2;
		ft_put_ptr(pi, &count);
	}
	return (count);
}