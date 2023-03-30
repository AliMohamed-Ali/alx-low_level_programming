#include "main.h"
/**
 * _strcmp - compare s1 and s2
 * @s1: second string
 * @s2: first string
 * Return: 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
