#include "main.h"
/**
 * _strlen - return length of string.
 * @str: pointer to array
 * Return: ponter to array or NULL
*/

int _strlen(char *str)
{
int size = 0;

while (str[size])
{
size++;
}
return (size);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @av: pointer to array
 * @ac: int
 * Return: ponter to array or NULL
*/
char *argstostr(int ac, char **av)
{
int i = 0, nc = 0, j = 0, cmpt = 0;
char *s;

if (ac == 0 || av == 0)
{
return (NULL);
}
for (; i < ac; i++, nc++)
{
nc += _strlen(av[i]);
}
s = malloc(sizeof(char) * nc + 1);
if (s == 0)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, cmpt++)
{
s[cmpt] = av[i][j];
}
s[cmpt] = '\n';
cmpt++;
}
s[cmpt] = '\0';
return (s);
}
