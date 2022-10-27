#include "main.h"

/**
 * get_bit - Gets the values of a bit at a given index
 * @n: The number to get the value
 * @index: The given index
 * Return: index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	num = n >> (index - 1);
	return (num & 1);
}
