#include "main.h"
#include <string.h>

/**
 * reverse_array - Prints the reverse of an array
 *
 *@a: The array to print
 *@n: The number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}