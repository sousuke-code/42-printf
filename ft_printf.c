#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int			n;
	const char	*start;
	char		c;

	n = 0;
	if (fmt == NULL)
		n = -1;
	va_start(ap, fmt);
	while (n >= 0 && *fmt)
	{
		start = fmt;
		if (*start != '%')
		{
			ft_putchar(*fmt);
			n++;
		}
		else
		{
			fmt++;
			if (*fmt == 'c')
			{
				c = (char)va_arg(ap, int);
				ft_putchar(c);
				n++;
			}
		}
		fmt++;
	}
	va_end(ap);
	return (n);
}

int	main(void)
{
	ft_printf("%c", 'a');
}