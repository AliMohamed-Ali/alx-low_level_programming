#include "main.h"
/**
 * jack_bauer - Entry point
 * 
 * Description: print every minute
 * Return: Always reurn void
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++ )
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else
				_putchar(hour + '0');
			_putchar(58);
			if (minute < 10)
			{
				_putchar('0');
				_putchar(minute + '0');
			}
			else
				_putchar(minute + '0');
			_putchar('\n');
		}
	}
}
