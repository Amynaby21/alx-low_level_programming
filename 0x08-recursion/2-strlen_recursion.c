#include "main.h"

/**
 *_strlen_recursion - Returns the length of a string
 *
 *@s: The string to return the lebgth
 *
 *Return: The length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
