#include "ft_printf.h"
void ft_putaddr(unsigned long long n, int *val)
{
    char *base;
    
    base = "0123456789abcdef";
    if (n < 16)
    {
        ft_putchar(base[n % 16], val);
        return;
    }
    else
    {
        ft_putaddr(n / 16, val);
        ft_putaddr(n % 16, val);
    }
}