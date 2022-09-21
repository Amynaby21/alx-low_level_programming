#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies the source string to the destination string
 *
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes in the source
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
