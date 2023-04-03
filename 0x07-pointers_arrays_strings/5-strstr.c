#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int itr, jtr;
char *p;

for (itr = 0; haystack[itr] != '\0'; itr++)
{
for (jtr = 0; needle[jtr] != '\0'; jtr++)
{
if (needle[jtr] == haystack[itr])
{
p = &haystack[itr];
return (p);
}
}
}
return (0);
}
