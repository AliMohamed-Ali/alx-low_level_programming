#include"main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @s: string of character
 * Return: pionter to string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
