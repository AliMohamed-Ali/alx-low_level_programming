#include "main.h"

/**
 * print_diagonal - print \ nmbers n
 * @n: number of \ more than 0
 */

void print_diagonal(int n)
{
	int i = 1, j;

	while (i <= n)
	{
		for (j = 1; j <= i; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
