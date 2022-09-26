#include "main.h"
#include <string.h>

/**
 * _strchr - prints the occurence of a character
 *
 *@s: the string to search for the occurence character
 *@c: the character
 *
 *Return: c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
