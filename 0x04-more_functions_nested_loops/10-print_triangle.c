#include "main.h"

/**
 * print_triangle - print # nmbers n
 * @size: number of # more than 0
 */

void print_triangle(int size)
{
	int i = 1, j;

	while (i <= n)
	{
		for (j = n; j <= i; j--)
			_putchar(32);
		_putchar(35);
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
