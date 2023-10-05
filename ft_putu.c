#include "ft_printf.h"
void ft_putu(unsigned int nb, int *val)
{
    if (nb < 10)
        ft_putchar(nb + '0', val);
    else
    {
        ft_putnbr(nb / 10, val);
        ft_putnbr(nb % 10, val);
    }
}