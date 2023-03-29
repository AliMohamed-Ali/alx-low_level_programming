#include "main.h"
/**
 * _strncpy - copy src with des
 * @src: second string
 * @dest: first string
 * @n: number of character in src
 * Return: char dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && *src != '\0'; j++)
		dest[j] = src[j];

	while (j < n)
		dest[j++] = '\0';
	return (dest);
}
