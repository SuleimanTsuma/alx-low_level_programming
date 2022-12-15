#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}

i++;

putchar('\n');
}

}
