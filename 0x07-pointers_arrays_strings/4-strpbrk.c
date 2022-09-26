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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
			return (s + i);
	}
	return ('\0');
}
