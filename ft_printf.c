#include "ft_printf.h"

static int ft_linker(char c, va_list ptr)
{
    int val;

    val = 0;
    if (c == 'd' || c == 'i')
    {
        ft_putnbr(va_arg(ptr, int), &val);
    }
    else if (c == 'c')
    {
        ft_putchar(va_arg(ptr, int), &val);
    }
    else if (c == 's')
    {
        ft_putstr(va_arg(ptr, char *), &val);
    }
    else if (c == 'u')
    {
        ft_putu(va_arg(ptr, unsigned int), &val);
    }
    else if (c == '%')
    {
        ft_putchar(c, &val);
    }
    else if (c == 'x' || c == 'X')
    {
        ft_putnbr_base(va_arg(ptr, unsigned int), c, &val);
    }
    else if (c == 'p')
    {
        ft_putstr("0x", &val);
        ft_putaddr(va_arg(ptr, unsigned long long), &val);
    }
    return (val);
}

int ft_printf(const char *fmt, ...)
{
    va_list ptr;
    int i;
    int total;

    i = 0;
    total = 0;
    va_start(ptr, fmt);
    while (fmt[i])
    {
        if (fmt[i] == '%')
        {
            i++;
            if (fmt == 0)
                break;
            total += ft_linker(fmt[i], ptr);
        }
        else
            ft_putchar(fmt[i], &total);
        i++;
    }
    va_end(ptr);
    return (total);
}

/* int main()
{
    int count = 22;

    count = ft_printf("salah: %x  %X  %s  %d  %c  %s  %i  %p  %u \n", 255, 255, NULL, 911, 'a', "string", 9, &count, 4294967295);
    printf("%d\n", count);
    count = printf("salah: %x  %X  %d  %c  %s  %i  %p  %lu \n", 255, 255, 911, 'a', "string", 9, &count, 4294967295);
    printf("%d\n", count);
} */