#include "main.h"

/**
 * print_more_numbers - print all nmbers from 0 to 14
 * 10 times
 */

void print_more_numbers(void)
{
	int i, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
