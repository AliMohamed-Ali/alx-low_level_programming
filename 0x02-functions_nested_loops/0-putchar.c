#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char s[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(s[ch]);
	_putchar('\n');
	return (0);
}
