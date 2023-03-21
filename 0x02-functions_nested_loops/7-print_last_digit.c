#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The character to check
 * Description: return absolute
 * Return: Always reurn int
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = (n % 10) * -1;
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
