#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *, ...);
void ft_putstr(char *s, int *val);
void ft_putaddr(unsigned long long n, int *val);
void ft_putnbr_base(unsigned long long n, char type, int *val);
void ft_putu(unsigned int nb, int *val);
void ft_putnbr(int nb, int *val);
void ft_putchar(char c, int *val);

#endif