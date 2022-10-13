#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 *
 * @separator: The string that separate th numbers
 * @n: The numbers to print
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}
