#include <stdio.h>
#include <stdbool.h>
/**
 * main - Entry point
 *
 * Descreption: Number seprate be ,
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1 = 0, digit2, digit3;
	bool check1, check2;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			digit3 = 0;
			while (digit3 <= 9)
			{
				check1 = digit1 != digit2 && digit1 != digit3;
				check2 = digit1 < digit2 && digit2 < digit3;
				if (check1 && check2)
				{
					putchar(digit1 + 48);
					putchar(digit2 + 48);
					putchar(digit3 + 48);
					if (digit1 + digit2 + digit3 != 24)
					{
						putchar(44);
						putchar(32);
					}
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;

	}
	putchar('\n');
	return (0);
}
