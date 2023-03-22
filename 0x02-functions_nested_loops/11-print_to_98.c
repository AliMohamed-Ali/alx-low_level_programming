#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: The character to check
 * Description: print from 0 to 98
 * Return: Always reurn void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	printf("98");
}
