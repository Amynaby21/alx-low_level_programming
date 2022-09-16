#include "main.h"

/**
 * print_integer: Prints an integer
 */

void print_integer(int n)
{
	unsigned int i;

	while (n < 0)
	{
		_putchar('-');
		i = -i;
		i--;
	}

	while ((i / 10) > 0)
	{
		print_number(i / 10);
		i++;
	}
	_putchar((i % 10) + '0');
}
