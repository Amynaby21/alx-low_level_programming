#include "main.h"

int _find_sqrt(int n, int r);

/**
 *_find_sqrt - Finds the square root of a number
 *
 *@n: The number
 *@r: The root
 *
 *Return: The root
 */

int _find_sqrt(int n, int r)
{
	if (r == n / 2)
		return (-1);
	else if (r * r == n)
		return (r);
	else
		return(_find_sqrt(n, r + 1));
}

/**
 *_sqrt_recursion - Returns the natural square root of a number
 *
 *@n: The number
 *
 *Return: sqrt
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_find_sqrt(n, r));
}
