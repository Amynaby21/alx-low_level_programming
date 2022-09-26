#include "main.h"
#include <string.h>

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
	char *src1 = (char *)src;
	char *dest1 = (char *)dest;

	for (i = 0; i < n; i++)
	{
		dest1[i] = src1[i];
	}
	return (dest);
}
