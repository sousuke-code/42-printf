#include "ft_printf.h"


void	ft_putnbr_unsigned(unsigned int i, int *count)
{
	if (i >= 10)
	{
		ft_putnbr_unsigned(i / 10, count);
	}
	ft_putchar(i % 10 + '0');
	(*count)++;
}

void	ft_put_hex(unsigned int i, int *count)
{
	int	tmp;

	if (i >= 16)
	{
		ft_put_hex(i / 16, count);
	}
	tmp = i % 16;
	if (tmp < 10)
	{
		ft_putchar('0' + tmp);
		(*count)++;
	}
	else
	{
		ft_putchar('a' + (tmp - 10));
		(*count)++;
	}
}

void	ft_put_hex_upper(unsigned int i, int *count)
{
	int	tmp;

	if (i >= 16)
	{
		ft_put_hex_upper(i / 16, count);
	}
	tmp = i % 16;
	if (tmp < 10)
	{
		ft_putchar('0' + tmp);
		(*count)++;
	}
	else
	{
		ft_putchar('A' + (tmp - 10));
		(*count)++;
	}
}

void	ft_put_ptr(unsigned long long i, int *count)
{
	int	tmp;

	if (i >= 16)
	{
		ft_put_ptr(i / 16, count);
	}
	tmp = i % 16;
	if (tmp < 10)
	{
		ft_putchar('0' + tmp);
		(*count)++;
	}
	else
	{
		ft_putchar('a' + (tmp - 10));
		(*count)++;
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		n;

	n = 0;

	va_start(ap, fmt);
	while (n >= 0 && *fmt)
	{
		if (*fmt != '%')
		{
			ft_putchar(*fmt);
			n++;
		}
		else
		{
			fmt++;
			n = format_handler(fmt, ap, n);
		}
		fmt++;
	}
	va_end(ap);
	return (n);
}

int main(void)
{
	printf("%s",NULL);
	
}