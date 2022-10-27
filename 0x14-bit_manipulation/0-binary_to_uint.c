#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a number from binary to unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int len, i = 1;
	int c;

	len = strlen(b);

	while (c = len - 1 && c >= 0)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			num += i;
		}
		i *= 2;
		c--;
	}
	return (num);
}
