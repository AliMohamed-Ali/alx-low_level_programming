#include"main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @s: string of character
 * Return: pionter to string
 */
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (s);
}
