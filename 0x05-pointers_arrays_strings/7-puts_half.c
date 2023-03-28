#include "main.h"
/**
 * puts_half - print half of string
 * @s: sting
 */
void puts_half(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	i++;
	for (i /= 2; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
