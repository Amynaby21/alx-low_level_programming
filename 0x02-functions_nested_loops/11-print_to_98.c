#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers from input to 98
 *
 * @n: The number to begin counting
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			_putchar(n);
			_putchar(',');
			_putchar(' ');
	}
	else
	{
		for (n = n; n > 98; n--)
			_putchar(n);
			_putchar(',');
			_putchar(' ');
	}
	_putchar('\n');
}
