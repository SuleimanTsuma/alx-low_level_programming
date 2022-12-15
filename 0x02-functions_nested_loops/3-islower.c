#include "main.h"
#include <stdio.h>

/**
 * _islower - checking for lowercase character.
 *@c: parameter
 * Return: 1 if c is lowercase, returns 0 otherwise.
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
putchar ('\n');
}
