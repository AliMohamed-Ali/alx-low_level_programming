#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - xecutes a function given as a
 * parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action: pointer of function to take action
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end = array + size - 1;
if (array && size && action)
{
while (array <= end)
{
action(*array++);
}
}
}

