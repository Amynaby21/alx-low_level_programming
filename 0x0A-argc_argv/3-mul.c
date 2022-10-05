#include <stdio.h>
#include <stdlib.h>

/**
 *main - Multiplies two numbers
 *
 *@argc: The number of arguments in the command line
 *@argv: An array of pointers to the arguments
 *
 *Return: If success - 0, if not Error
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
