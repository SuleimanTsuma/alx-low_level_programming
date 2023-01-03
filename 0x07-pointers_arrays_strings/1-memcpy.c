#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: pointer to destination array
 * @src: pointer to the data to be copied
 * @n: number of bytes
 *
 * Retur: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];

	}

	return (dest);

}


