#include "main.h"
/**
 * _strchr - replace dest with src character number of n
 * @s: string
 * @c: string
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int itr = 0;

	while (*s)
	{
		if (s[itr] == c)
			return (s + itr);
		s++;
	}
	return ('\0');
}
