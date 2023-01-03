#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be searched
 *
 * Return: pointer and NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a); a++)
	{
		if (*(s + a) == c)
			return (s + a);

	}
	if (*(s + a) == c)
		return (s + a);
	return (0);


}
