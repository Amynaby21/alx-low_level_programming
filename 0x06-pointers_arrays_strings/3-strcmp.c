#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int ret = strcmp(s1, s2);

	if (ret < 0)
		return (s1 < s2);
	else if (ret > 0)
		return (s2 < s1);
	else
		return (s2 == s1);
	return (0);
}
