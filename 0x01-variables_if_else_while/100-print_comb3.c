#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if (x == 57 && y == 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
