#include "main.h"
/**
 * rev_string - take pointer and reverse string
 * @s: pointer of string
 */
void rev_string(char *s)
{
	int i = 0, j;
	char str;

	while (s[i])
		i++;

	for (j = 0; j < i / 2; j++)
	{
		str = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = str;
	}
}
