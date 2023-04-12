#include "main.h"
/**
 * _strncat - conacte src with des
 * @src: second string
 * @dest: first string
 * @n: number of character in src
 * Return: char dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < n && *src != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
