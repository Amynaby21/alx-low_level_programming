#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("The size of a char: %lu byte(s)\n", sizeof(c));
	printf("The size of an init: %lu byte(s)\n", sizeof(i));
	printf("The size of a long int: %lu byte(s)\n", sizeof(ld));
	printf("The size of a long long int: %lu byte(s)\n", sizeof(lld));
	printf("The size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
