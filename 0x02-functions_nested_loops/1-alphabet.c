#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print alphabet
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
