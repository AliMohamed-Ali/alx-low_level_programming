#include "main.h"
/**
 * is_prime_number - hat returns 1 if the input integer is a prime number, otherwise return 0
 * @n: the number
 * @other: the other number
 * Return: int success(1)
 */
int check_prime(int n, int other);
int is_prime_number(int n)
{
return check_prime(n, 2);
}

/**
 * check_prime - check n is prime
 * @n: the number
 * @other: the other number
 * Return: int success(1)
 */
int check_prime(int n, int other)
{
if (other >= n && n > 1)
{
return (1);
}
else if (n % other == 0 || n <= 1)
{
return (0);
}
else
{
return (check_prime(n, other + 1));
}
}

