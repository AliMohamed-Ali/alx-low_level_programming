#include "main.h"
/**
 * reverse_array - reverse array element
 * @a: element of array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}

	printf("\n");
}
