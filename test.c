#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int sum_integers(int count, ...) {
    int sum = 0;

    va_list ap;
    va_start(ap, count);

    for (int  i = 0; i < count ; i++) {
        int value = va_arg(ap, int);
        sum += value;
    }

    va_end(ap);
    return sum;
}

int main(void)
{
    int result = sum_integers(4,10, 20, 30, 40);
    printf("Sum : %d\n", result);
    return 0;
}