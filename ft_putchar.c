#include "ft_printf.h"

void ft_putchar(char c, int *val)
{
    (*val) += write(1, &c, 1);
}