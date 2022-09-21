#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string to another
 * @src: The pointed string
 * @dest: The buffer pointed
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < src[i]; i++)
		dest[i] = '\0';

	return (dest);
}
