#include "main.h"

/**
 * print_diagonal - print \ nmbers n
 * @n: number of _ more than 0
 */

void print_diagonal(int n)
{
	int i = 1, j;

	while (i <= n)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('\');
		_putchar('\n');
		i++;
	}
}
