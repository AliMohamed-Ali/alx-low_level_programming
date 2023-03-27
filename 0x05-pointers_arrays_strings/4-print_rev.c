#include "main.h"
/**
 * print_rev - take pointer and print string in reverse
 * @s: pointer of string
 */
void print_rev(char *s)
{
	int str_len, i;
	char str[] = *s;

	str_len = _strlen(s);
	for (i = str_len; i >= 0; i--)
		_putchar(str[i]);
	}
	_putchar('\n');
}
