#include "main.h"
/**
 * print_rev - take pointer and print string in reverse
 * @s: pointer of string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
