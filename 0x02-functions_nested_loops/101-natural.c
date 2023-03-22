#include "main.h"
/**
 * main - Entry point
 * Description: print sum of multiple 3 and 5
 * Return: Always reurn void
 */
int main(void)
{
	int sum, i;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d \n", sum);
}
