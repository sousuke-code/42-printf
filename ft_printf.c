#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void ft_putchar(char c)
{
   write(1,&c,1);
}



int ft_printf(const char *fmt, ...)
{
    va_list ap;
    int n;
    const char *start;

    n = 0;
    if (fmt == NULL)
       n = -1;
    va_start(ap, fmt);
    while(n >= 0 && *fmt)
    {
        start = fmt;
        if (*start != '%')
           ft_putchar(*fmt);
           n++;
         else
         {
            if()
         }
        fmt++;
    }
    va_end(ap);
    return (n);
}



int main(void)
{
   printf("%c","acccc");
}