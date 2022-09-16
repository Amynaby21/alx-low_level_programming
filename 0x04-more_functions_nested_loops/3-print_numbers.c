#include "main.h"

/**
 * print_numbers - Prints numbers form 0 to 9
 * @i: The numbers
 * Return: The result
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
