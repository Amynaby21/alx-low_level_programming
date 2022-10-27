#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 * @n: The number of bits
 * @m: The other number to flip
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned int b1, b2;

	while (n > 0 || m > 0)
	{
		b1 = (n & 1);
		b2 = (m & 1);
		if (b1 != b2)
			flip++;
	}
	return (flip);
}
