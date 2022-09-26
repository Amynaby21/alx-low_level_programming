#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 *@s: the initial segment
 *@accept: the segment that the elngth is printed
 *
 *Return: the number of bytes of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int length1 = strlen(s);
	unsigned int length2 = strlen(accept);
	unsigned int i, j;

	for (i = 0; i < length1; i++)
	{
		for (j = 0; j < length2; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			if (accept[j + 1] == '\0')
				return (length);
		}
	}
	return (length);
}
