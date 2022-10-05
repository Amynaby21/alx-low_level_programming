#include <stdio.h>

/**
 *main - Prints the number of arguments passed into the program
 *
 *@argc: The number of arguments in the command line
 *@argv: An array of pointers to the arguments
 *
 *Return: Always 0
 */

int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
