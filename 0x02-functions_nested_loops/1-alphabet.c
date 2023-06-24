#include "main.h"
/**
 * main - printing alphabet in lower case
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return (0);
}
