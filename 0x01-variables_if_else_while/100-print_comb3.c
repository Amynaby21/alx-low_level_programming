#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 48; x < 57; x++)
	{
		for (y = 49; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if (x == 56 && y == 57)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
