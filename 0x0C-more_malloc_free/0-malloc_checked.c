#include "main.h"

/**
 *malloc_checked - Allocates memory
 *
 *@b: The bytes to allocate
 *
 *Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
