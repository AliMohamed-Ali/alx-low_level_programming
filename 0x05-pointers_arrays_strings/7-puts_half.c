#include "main.h"
/**
 * puts_half - print half of string
 * @str: sting
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	if (i % 2 == 0)
	{
		for (j = i / 2; j <= i; j++)
			_putchar(s[j]);
	}
	else
	{
		for (j = (i - 1) / 2; j <= i; j++)
			_putchar(s[j]);
	}
	_putchar('\n');
}
