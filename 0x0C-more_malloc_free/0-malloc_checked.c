#include "main.h"
/**
 * malloc_checked -  that allocates memory using malloc.
 * @b: int
 * Return: pointer or Null
*/
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);

if (m == 0)
{
exit(98);
}
return (m);
}
