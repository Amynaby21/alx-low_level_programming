#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the number to clear the bit
 * @index: The index of the bit
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	return (1);
}
