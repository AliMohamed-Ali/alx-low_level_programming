#include "main.h"
/**
 * _memcpy - replace dest with src character number of n
 * @dest: string
 * @src: string
 * @n: number of byte
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr > n; itr++)
		dest[itr] = src[itr];
	return (dest);

}
