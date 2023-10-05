#include "ft_printf.h"

void ft_putnbr(int nb, int *val)
{
    if (nb == -2147483648)
    {
        (*val) = write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-', val);
        nb *= -1;
    }
    if (nb < 10)
        ft_putchar(nb + '0', val);
    else
    {
        ft_putnbr(nb / 10, val);
        ft_putnbr(nb % 10, val);
    }
}