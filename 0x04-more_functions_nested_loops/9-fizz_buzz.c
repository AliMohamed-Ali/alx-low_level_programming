#include "main.h"

/**
 * main - Entry point print from 0 to 100
 * but number % 3 print Fizz and % 5print Buzz and both print FizzBUzz
 */

int main (void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 ==0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else 
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
