#include "main.h"
/**
 * _puts2 - take pointer and print string
 * @str: pointer of string
 */
void _puts2(char *str)
{
	while (1)
	{
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}
		if (*str % 2 == 0)
			_putchar(*str + '0');
		str++;
	}
}
