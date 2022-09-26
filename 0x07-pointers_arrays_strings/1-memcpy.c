#include "main.h"

/**
 *_memcpy - Copies a memory area
 *
 *@dest: The destination memory
 *@src: The source memory
 *@n: The number of bytes
 *
 *Return: A pointer to the destination memory dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i + 1] = src[i];
	}
	return (dest);
}
