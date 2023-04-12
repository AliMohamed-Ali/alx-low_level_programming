#include "main.h"
/**
 * _strcpy - copy from src to dest
 * @dest: pointer of dest
 * @src: pointer of src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
