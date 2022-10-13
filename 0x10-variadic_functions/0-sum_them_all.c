#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of allits parameters
 *
 * @n: The numbers to sum
 *
 * Return: The reulted sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum;

	va_start(nums, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
