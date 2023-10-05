#include "ft_printf.h"

void ft_putstr(char *s, int *val)
{
    int i;

    i = 0;
    if (s == NULL)
    {
        ft_putstr("(null)", val);
        return;
    }
    while (s[i])
    {
        ft_putchar(s[i], val);
        i++;
    }
}