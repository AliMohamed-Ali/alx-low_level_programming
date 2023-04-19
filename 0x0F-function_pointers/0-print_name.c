#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints the sum argument
 * @name: name
 * @f: pointer of function
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}

