#include "main.h"
/**
 * times_table - Entry point
 * Description: print every minute
 * Return: Always reurn void
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');
			result = row * col;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
