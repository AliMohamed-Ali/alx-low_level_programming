#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The character to check
 * Description: return absolute
 * Return: Always reurn int
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n * -1) % 10;
		return (n);
	}
	return (n % 10);
}
