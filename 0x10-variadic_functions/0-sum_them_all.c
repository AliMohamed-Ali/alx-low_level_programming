#include "variadic_functions.h"

/**
 * sum_them_all - that returns the sum of all its parameters.
 * @n: number of arg
 * Return: the sum or zero
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
int s = 0, i = n;

if (n == 0)
{
return (0);
}
va_start(arg, n);
while (i--)
{
s += va_arg(arg, int);
}
va_end(arg);
return (s);
}
