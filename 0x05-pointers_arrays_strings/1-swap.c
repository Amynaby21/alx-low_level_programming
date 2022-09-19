#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: One of the integers
 * @b: One of the integers
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
