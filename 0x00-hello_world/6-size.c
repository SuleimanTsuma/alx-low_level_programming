#include <stdio.h>

	/**
	 * main - Entry point
	 *
	 * Return: Always 0 (Success)
	 */
int main(void)
{
	printf("size of the char: %lu byte(s)\n",sizeof(char));
	printf("size of an int: %lu byte(s)\n",sizeof(int));
	printf("size of the long int: %lu byte(s)\n",sizeof(long int));
	printf("size of the long long int: %lu byte(s)\n",sizeof(long long int));
	printf("size of the float: %lu byte(s)\n",sizeof(float));
	return (0);
}
