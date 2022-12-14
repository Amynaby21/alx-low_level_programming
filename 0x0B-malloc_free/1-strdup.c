#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - returns a copy of a string given as a paramter from
 *a newly allocate space of a pointer
 *
 *@str: The string to duplicate
 *
 *Return: NULL, and NULL if insufficinet memory, or str
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, n;

	n = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		n++;
	s = malloc(sizeof(char) * (n + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s);
}
