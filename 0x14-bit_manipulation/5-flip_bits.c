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
	unsigned int b = n ^ m;

	while (b > 0)
	{
		flip += (b & 1);
		b >>= 1;
		flip++;
	}
	return (flip);
}
