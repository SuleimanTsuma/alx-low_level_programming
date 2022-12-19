#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str:string
 *
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

	}

	_putchar('\n');

}
