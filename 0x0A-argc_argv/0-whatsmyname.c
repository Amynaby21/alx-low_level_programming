#include <stdio.h>

/**
 *main - Prints the name of the program
 *
 *@argc: The number of command lines
 *@argv: An array of pointers to the arguments
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s ", argv[i]);
	printf("\n");
	return (0);
}
