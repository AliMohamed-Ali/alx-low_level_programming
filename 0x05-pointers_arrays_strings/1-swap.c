#include "main.h"
/**
 * swap_int - take a,b and swap between them
 * @a: charater that swap
 * @b: character that swap
 */
void swap_int(int *a, int *b)
{
	int *n = a;

	*a = *b;
	*b = *n;
}
