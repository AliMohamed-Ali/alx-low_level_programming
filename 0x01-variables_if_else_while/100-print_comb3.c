#include <stdio.h>
/**
 * main - Entry point
 *
 * Descreption: Number seprate be ,
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1 = 0, digit;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (difit2 <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);
			}
			if (digit1 + digit2 != 17)
			{
				putchar(44);
				putchar(32);
			}
			digit2++;
		}
		digit1++;

	}
	putchar('\n');
	return (0);
}