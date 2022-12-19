#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - a function that prints a string in reverse
 *@s:string
 *
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)

		_putchar(*(s + len));

	_putchar(10);
}

