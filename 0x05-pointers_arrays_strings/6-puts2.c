#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The string
 */

void puts2(char *str)
{
	int len = strlen(str), index;

	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
