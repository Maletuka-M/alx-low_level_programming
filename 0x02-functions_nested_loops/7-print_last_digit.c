#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @i : is an integer
 * integer is the datatype computed and returned
 * Return: Absolute value
 */
int print_last_digit(int i)
{
int last;
last = i % 10;
if (last < 0)
{
_putchar(-last + 48);
return (-last);
}
else
{
_putchar(last + 48);
return (last);
}
}
