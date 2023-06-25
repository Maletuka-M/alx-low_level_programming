#include "main.h"
/**
 * print_times_table - printing the nth times table starting with 0
 * @n : is an integer
 * No print for n > 15 and n < 0
 * Return: no return
 */
void print_times_table(int n)
{
int i, j, prod;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
_putchar('0');
for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');

prod = i * j;

if (prod <= 90)
_putchar(' ');
if (prod <= 9)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10) % 10) + '0');
}
else if (prod <= 90 && prod >= 10)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
