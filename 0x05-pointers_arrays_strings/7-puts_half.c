#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the half of a string
 * @str: The string to be printed
 */

void puts_half(char *str)
{
	int len = strlen(str), i;
	int n = ((len - 1) / 2);

	if (len % 2 != 0)
		for (i = n + 1; i < len; i++)
			_putchar(str[i]);
	else
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	_putchar('\n');
}
