#include <stdio.h>
#include <stdlib.h>

/**
 *main - Prints the minimum number of coins to make change for an amount of money
 *
 *@argc: The number of arguments in the command line
 *@argv: An array of pointers to the arguments
 *
 *Return: If success - 0, if not Error
 */
int main(int argc, char *argv[])
{
	int cents, min_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;

		min_coins = min_coins + 1;
	}
	printf("%d\n", min_coins);
	return (0);
}
