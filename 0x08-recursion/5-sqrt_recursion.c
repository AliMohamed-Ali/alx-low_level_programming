#include "main.h"
/**
 * _sqrt_recursion - that returns the natural square root of a number.
 * @n: the number
 * @val: square root
 * Return: int
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - that returns the natural square root of a number.
 * @n: the number
 * @val: the square root
 * Return: int
 */
int square(int n, int val)
{
if (val * val == n)
{
return (val);
}
else if (val * val < n)
{
return (square(n, val + 1));
}
else
{
return (-1);
}
}
