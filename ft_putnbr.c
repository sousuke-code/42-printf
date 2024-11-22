
#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar('-');
		ln = -ln;
		(*count)++;
	}
	if (ln >= 10)
	{
		ft_putnbr(ln / 10, count);
	}
	ft_putchar(ln % 10 + '0');
	(*count)++;
}