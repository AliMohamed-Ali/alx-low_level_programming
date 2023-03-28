#include "main.h"
/**
 * print_array - print array seprate be ,
 * @a: pointer of array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		printf("%d, ", a[i]);
	}
}
