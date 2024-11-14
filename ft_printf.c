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

void ft_putnbr_unsigned(unsigned int i, int *count)
{

	if (i >= 10)
	{
		ft_putnbr_unsigned(i / 10, count);
	}
	ft_putchar(i % 10 + '0');
	(*count)++;
}

void ft_put_hex(unsigned int i, int *count)
{
	int tmp;
	if (i >= 16)
	{
		ft_put_hex(i / 16, count);
	}
	tmp = i % 16;
	if (tmp < 10){
	  ft_putchar('0' + tmp);
	  (*count)++;
	}
	else
	{
	  ft_putchar('a' + (tmp -10));
	  (*count)++;
	}
}

void ft_put_hex_upper(unsigned int i, int *count)
{
	int tmp;
	if (i >= 16)
	{
		ft_put_hex_upper(i / 16, count);
	}
	tmp = i % 16;
	if (tmp < 10){
	  ft_putchar('0' + tmp);
	  (*count)++;
	}
	else
	{
	  ft_putchar('A' + (tmp - 10));
	  (*count)++;
	}
}

void ft_put_ptr(unsigned long long i, int *count)
{
	int tmp;

	if (i >= 16)
	{
		ft_put_ptr(i /16 , count);
	}
	tmp = i % 16;
	if (tmp < 10) {
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
	va_list		ap;
	int			n;
	const char	*start;
	char		c;
   char *s;
   int i;
   unsigned int ui;
   unsigned long long pi;

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
		 else if (*fmt == 'u')
		 {
           ui = va_arg(ap, unsigned int);
		   ft_putnbr_unsigned(ui, &n);
		 }
		 else if (*fmt == 'x')
		 {
			ui = va_arg(ap, unsigned int);
			ft_put_hex(ui, &n);
		 }
		 else if (*fmt == 'X')
		 {
			ui = va_arg(ap, unsigned int);
			ft_put_hex_upper(ui, &n);
		 }
		 else if (*fmt == '%')
		 {
            write(1,"%%",1);
			n++;
		 }
		 else if (*fmt == 'p')
		 {
			pi = (unsigned long long)va_arg(ap, void *);
			write(1,"0x",2);
			ft_put_ptr(pi, &n);
		 }
		}
		fmt++;
	}
	va_end(ap);
	return (n);
}

int	main(void)
{
	printf("printf :%p\n", "aiueo");
	ft_printf("ft_printf : %p\n", "aiueo");
}