#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: The pointer to the function to be used
 *
 * Return: -1 or the index of the first element for which
 * cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
