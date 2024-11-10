#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *fmt, ...)
{
    va_list ap;
    char *s;

    va_start(ap, fmt);

   s = (chr *)va_arg(ap,char *);

   d = (int)va_arg(ap, int);

   va_end(ap);

}

int main(void)
{
    printf("1122343");
}