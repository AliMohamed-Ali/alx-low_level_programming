#include "main.h"

/**
 * print_line - print _ nmbers n
 * @n: number of _ more than 0
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
