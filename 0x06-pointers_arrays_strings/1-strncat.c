#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 *
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes from source
 *
 * Return: The resulting destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
