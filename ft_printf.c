

int ft_printf(const char *fmt, ...)
{
    va_list ap;
    int n:
    const char *start;

    n = 0;
    if (fmt == NULL)
       n = -1;
    va_strat(ap, fmt);
    while(n >= 0 && *fmt)
    {
        start = fmt;
        if (*start != '%')
           // %ではない場合は普通に出力する
        else
           // %書きた場合に指定子による場合分け関数に移行する。

        fmt++;
    }
    va_end(ap);
    return (n);
}