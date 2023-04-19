#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - xecutes a function given as
 * a parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @cmp: pointer of function to take action
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && size && cmp)
{
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
i++;
}
}
return (-1);
}

