#include "main.h"
/**
 * _memset - replace b with n character of s
 * @s: string
 * @b: character
 * @n: number of byte
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++; n--)
		s[itr] = b;
	return (s);

}
