#include "main.h"
/**
 * rev_string - take pointer and reverse string
 * @s: pointer of string
 */
void rev_string(char *s)
{
	int i = 0, j;

	while (s[i])
		i++;

	char str;

	for (j = i; j >= 0; j--)
	{
		str[j] = s[i--];
	}
	*s = str;
}
