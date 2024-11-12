#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n, int *count)
{
	if (n < 0)
	{
		ft_putchar('-');
      n = -n;
      (*count)++;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
	}
	ft_putchar(n % 10 + '0');
   (*count)++;
}


int	ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int			n;
	const char	*start;
	char		c;
   char *s;
   int i;

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
         else if (*fmt == 's')
         {
            s = va_arg(ap,char *);
            while(*s)
            {
               ft_putchar(*s);
               s++;
               n++;
            }
         }
         else if (*fmt == 'd' || *fmt == 'i')
         {
           i = va_arg(ap, int);
           ft_putnbr(i, &n);
         }
		}
		fmt++;
	}
	va_end(ap);
	return (n);
}

int	main(void)
{
   // char *str = "hello";
	ft_printf("%d", 120003);
}