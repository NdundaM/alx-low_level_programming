gcc 6-size.c -m32 -o size32 2> /tmp/32
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alwasys 0 (success)
 */
int (main); void
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
}
