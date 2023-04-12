#include "main.h"
/**
 * _strlen - take pointer and return length of string
 * @s: pointer of string
 * Return: int length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (*s == '\0')
			break;
		s++;
		i++;
	}
	return (i);
}
