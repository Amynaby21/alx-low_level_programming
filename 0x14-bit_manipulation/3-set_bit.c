#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the number
 * @index: The index of the bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	while (index = 7)
	{
		if (*n & 1 << index)
			return (1);
		else
			return (-1);
		index--;
	}
	return (1);
}
