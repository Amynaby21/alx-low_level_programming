#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);

		_putchar('\n');
	}
	_putchar('\n');
}