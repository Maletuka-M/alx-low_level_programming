#include "main.h"
/**
 * print_to_98 - printing all natural numbers from n to 98
 * @n : is an integer
 * Return: Always 0
 */
void print_to_98(int n)
{

for (; n <= 98; n++)
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
{
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
