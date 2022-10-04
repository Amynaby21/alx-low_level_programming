#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 * and initializes it with a specific char
 *
 *@size: the size of the array to initialize
 *@c: the char storage
 *
 *Return: NULL if size = 0, a pointer to the array, or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		a[i] = c;
	if (a == NULL)
		return (NULL);

	return (a);
}
