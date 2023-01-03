#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: matrix of the integer
 * @size: size of the integer
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, s1, s2;

s1 = 0;
s2 = 0;

for (i = 0; i < (size * size); i++)
{
if (i % (size + 1) == 0)
s1 += a[i];
if (i % (size - 1) == 0 && i != 0 && i < size * size - i)
s2 += a[i];

}
printf("%d, %d\n", s1, s2);


}
