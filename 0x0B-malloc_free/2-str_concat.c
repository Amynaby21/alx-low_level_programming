#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat- Concates two strings
 *
 *@s1: The first string
 *@s2: The second string
 *
 *Return: NULL on failure or the string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j = 0, n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		n++;
	for (i = 0; s2[i] !='\0'; i++)
		n++;
	str = malloc(sizeof(char) * n);

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[j++] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		str[j++] = s2[i];

	return (str);
}
