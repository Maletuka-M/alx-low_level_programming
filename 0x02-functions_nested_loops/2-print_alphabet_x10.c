#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets in lowercase 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
char ch = 'a';

for (i = 1; i <= 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
