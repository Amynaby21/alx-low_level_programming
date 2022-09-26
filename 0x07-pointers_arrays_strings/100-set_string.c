#include "main.h"

/**
 *set_string - Sets the value of a pointer to a char
 *
 *@s: The string to be be pointed
 *@to: The char that the string points
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
