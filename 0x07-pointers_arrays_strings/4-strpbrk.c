#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int itr, jtr;
char *p;

for (itr = 0; s[itr] != '\0'; itr++)
{
for (jtr = 0; accept[jtr] != '\0'; jtr++)
{
if (accept[jtr] == s[itr])
{
p = &s[itr];
return (p);
}
}
}
return (0);
}
