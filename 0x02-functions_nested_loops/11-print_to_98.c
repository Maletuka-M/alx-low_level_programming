#include "main.h"
/**
 * print_to_98 - printing all natural numbers from n to 98
 * @n : is an integer
 * Return: Always 0
 */
void print_to_98(int n)
{

if (n <= 98)
{
for (; n <= 98; n++)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (; n >= 98; n--)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
