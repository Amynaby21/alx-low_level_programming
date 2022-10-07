#include "main.h"

/**
 *array_range - Creates an array of integers
 *
 *@min: The minimum value
 *@max: The maximum value
 *
 *Return: if min > max - NULL, if fails - NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);
	for(i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}


