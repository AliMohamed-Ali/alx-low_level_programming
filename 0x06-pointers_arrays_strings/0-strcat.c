#include "main.h"
/**
 * _strcat - conacte src with des
 * @src: second string
 * @dest: first string
 * Return: char dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
		i++;

	while (*src != '\0')
	{
		dest[i++] = *src;
		src++;
	}
	return (dest);
}
