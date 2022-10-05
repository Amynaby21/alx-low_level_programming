#include <stdio.h>

/**
 *main - Prints the name of the program
 *
 *@argc: The number of command lines
 *@argv: An array of pointers to the arguments
 *
 *Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
