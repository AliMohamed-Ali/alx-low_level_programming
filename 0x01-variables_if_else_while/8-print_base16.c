#include <stdio.h>
/**
 * main - Entry point
 *
 * Descreption: Number in base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= 102)
	{
		putchar(i);
		if (i == 57)
			i = 96;
		i++;
	}
	putchar('\n');
	return (0);
}
