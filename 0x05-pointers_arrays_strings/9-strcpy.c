#include "main.h"

/**
 * _strcpy - Copies a string to another
 * @src: The pointed string
 * @dest: The buffer pointed
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	_strcpy(ptr, src);
	return (dest);
}
