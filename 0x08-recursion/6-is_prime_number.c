#include "main.h"

int prime_number(int n, int p);

/**
 *prime_number - Checks if a number is prime or not
 *
 *@n: The number to check
 *@p: The factor
 *
 *Return: The number
 */

int prime_number(int n, int p)
{
	int i = n / 2;

	if (n % p == 0)
		return (0);
	if (p == i)
		return (1);
	return (prime_number(n, p + 1));
}

/**
 *is_prime_number - Checks if an input number is a prime number
 *
 *@n: The input number
 *
 *Return: 1 if prime number, or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}
