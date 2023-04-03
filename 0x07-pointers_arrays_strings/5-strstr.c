#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n == *haystack && *n != '\0' && *haystack != '\0')
{
n++;
haystack++;
}

if (*n == '\0')
{
return (h);
}

haystack = h + 1;
}

return ('\0');
}
