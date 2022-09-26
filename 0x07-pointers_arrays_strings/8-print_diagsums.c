#include "main.h"

/**
 *print_diaggsums - Prints the sum of two diagonals
 *of a square matrix of integers
 *
 *@a: The arrays of the matrix
 *@size: The size of the matrix
 *
 *Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	_putchar(a[i]);
}
