#include "main.h"

/**
 *string_nconcat - Concatenates two strings
 *
 *@s1: The first string
 *@s2: The second string
 *@n: The first bytes of s2
 *
 *Return: The concatenate string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		n++;
	str = malloc(sizeof(char) * (n + 1));

	if (str == NULL)
		return (NULL);
	n = 0;

	for (i = 0; s1[i] != '\0'; i++)
		str[n++] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		str[n++] = s2[i];

	str[n] = '\0';

	return (str);
}
