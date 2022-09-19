#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in a reverse order
 * @s: The string that is printed
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (count = -1; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
