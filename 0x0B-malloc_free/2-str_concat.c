#include "main.h"
/**
 * str_concat -  concatenates two strings.
 * @s1: pointer of array
 * @s2: pointer of array
 * Return: ponter to array or NULL
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int i = 0, size1 = 0, size2 = 0;

if (s1 == NULL)
	s1 = '\0';
if (s2 == NULL)
	s2 = '\0';
while (s1[size1])
	size1++;
while (s2[size2])
	size2++;

s = malloc((size1 + size2) * sizeof(char) + 1);

if (s == 0)
	return (NULL);
for (; i <= (size1 + size2); i++)
{
if (i < size1)
s[i] = s1[i];
else
	s[i] = s2[i - size1];
}
s[i] = '\0';
return (s);
}
