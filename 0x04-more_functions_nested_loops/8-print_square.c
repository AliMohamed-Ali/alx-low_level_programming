#include "main.h"

/**
 * print_square - print # nmbers size
 * @size: number of size more than 0
 */

void print_square(int size)
{
	int i = 1, j;

	while (i <= size)
	{
		for (j = 1; j <= size; j++)
			_putchar(35);
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
