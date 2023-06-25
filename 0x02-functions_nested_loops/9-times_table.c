#include "main.h"
/**
 * times_table - printing the 9 times table starting with 0
 * Return: no return
 */
void times_table(void)
{
int i;

for (i = 0; i <= 9; i++)
{
int result = 9 * i;
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
_putchar('\n');
}
}
}
