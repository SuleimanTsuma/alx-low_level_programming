#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
for
(c <= 'z') {
putchar(c);
c++;
}
for
(d <= 'z') {
putchar(d);
d++;
}
putchar('\n');
return (0);
}
