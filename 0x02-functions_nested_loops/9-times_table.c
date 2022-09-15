#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i, j;
	int prod;

	for (i = 0; i <= 9; i++)
		_putchar('0');


		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * j;
		}


	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}

		_putchar('\n');
	}
}
