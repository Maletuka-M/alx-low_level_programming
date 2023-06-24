#include "main.h"
/**
 * _islower - Checks for lowercase character
 * Shows 1 if lowercase and 0 otherwise
 * @c: is is ASCII code
 * Return: 1 for lowercase and 0 for the rest
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
