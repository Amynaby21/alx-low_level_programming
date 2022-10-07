#include "main.h"

/**
 *_calloc - Allocates memory for an array
 *
 *@nmemb: The number of elemnts of the array
 *@size: The size of the array
 *
 *Return: NULL if nmemb or size = 0, if maloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, n;

	n = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = 0;
	return (ptr);
}
