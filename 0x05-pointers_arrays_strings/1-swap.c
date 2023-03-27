#include "main.h"
/**
 * swap - take a,b and swap between them
 * @a: charater that swap
 * @b: character that swap
 */
void swap(int *a, int *b)
{
	int *n = a;

	a = b;
	b = n;
}
