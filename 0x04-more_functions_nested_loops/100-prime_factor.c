#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int i, max = -1;
	long int n;

	n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	return max;
}
