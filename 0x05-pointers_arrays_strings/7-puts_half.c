#include "main.h"
/**
 * puts_half - print half of string
 * @s: sting
 */
void puts_half(char *s)
{
	int i = 0, j;

	while (s[i])
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
