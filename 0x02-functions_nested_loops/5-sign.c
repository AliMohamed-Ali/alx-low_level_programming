#include "main.h"
/**
 * print_sign - Entry point
 * @n: The character to check
 * Description: check sign + || 0 || -
 * Return: Always void
 */
int print_sign(int n)
{
	if (n > 0)
	{
		__putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		__putchar('0');
		return (0);
	}
}
