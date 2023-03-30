#include "main.h"
/**
 * reverse_array - reverse array element
 * @a: element of array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j =  (n - 1); i < j; j--, i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}

}
