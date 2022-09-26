#include "main.h"
#include <string.h>

/**
 *_strpbrk - Locates the first occurence in a string of a character
 *
 *@s: The string to look into
 *@accept: The string to search for the set of bytes
 *
 *Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int length1 = strlen(s);
	unsigned int length2 = strlen(accept);
	unsigned int i, j;

	for (i = 0; i < length1; i++)
	{
		for (j  = 0; j < length2; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
