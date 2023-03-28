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
	for (j = i / 2; j <= i; j++)
		_putchar(s[j]);
	_putchar('\n');
}
