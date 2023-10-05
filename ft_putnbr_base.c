#include "ft_printf.h"

void ft_putnbr_base(unsigned long long n, char type, int *val)
{
    char *base;
    if (type == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";

    if (n < 16)
    {
        ft_putchar(base[n % 16], val);
        return;
    }
    else
    {
        ft_putnbr_base(n / 16, type, val);
        ft_putnbr_base(n % 16, type, val);
    }
}