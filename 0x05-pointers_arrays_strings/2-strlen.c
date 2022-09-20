#include "main.h"

/**
 * _strlen - Prints the length of a string
 *
 * @s: The string that the length is printed
 * Return: The length
 */

int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; ++str);

	return (str);
}
