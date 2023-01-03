#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: contains list to be searched
 *
 * Return: number of bytes in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);

}
