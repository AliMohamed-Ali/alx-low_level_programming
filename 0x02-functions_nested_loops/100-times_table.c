#include "main.h"
/**
 * print_times_table - Entry point
 * Description: print multible tabel
 * @n: multible timet
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n > 0 && n <= 15)
	{
		for (row = n; row <= 9; row++)
		{
			_putchar(48);
			for (col = 1; col <= n; col++)
			{
				_putchar(',');
				_putchar(' ');
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
}
