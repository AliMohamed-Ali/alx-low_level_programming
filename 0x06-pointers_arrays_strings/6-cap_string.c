#include"main.h"
/**
 * is_lower - check character is lower case
 * @c: character
 * Return: true 1 or false 0
 */
int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - check character is delimiter or not
 * @c: character
 * Return: true 1 or false 0
 */
int isDelimiter(char c)
{
	int i;
	char del[] = " \n\t,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == del[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - change all lowercase to uppercase start of word
 * @s: string of character
 * Return: pionter to string
 */
char *cap_string(char *s)
{
	int foundDil = 1;
	char *ptr = s;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDil = 1;
		else if (is_lower(*s) && foundDil)
		{
			*s -= 32;
			foundDil = 0;
		}
		else
			foundDil = 0;
		s++;
	}
	return (ptr);
}
