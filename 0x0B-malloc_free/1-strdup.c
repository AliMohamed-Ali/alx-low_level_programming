#include "main.h"
/**
 * _strdup -  that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: pointer of array
 * Return: ponter to array or null
*/
char *_strdup(char *str)
{
char *s;
int i = 0, size = 0;

if (str == Null)
	return (Null);
while (str[size])
	size++;
s = malloc(size * sizeof(char) + 1);
if (s == 0)
	return (Null);
for (; i <= size; i++)
	s[i] = str[i];

return (s);
}
