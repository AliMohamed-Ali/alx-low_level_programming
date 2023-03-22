#include "main.h"
/**
 * main - Entry point
 * Description: Fibonacci sum even number
 * Return: always 0(Success)
 */
int main(void)
{
	float total_sum;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (true)
	{
		sum = fib1 + fib2;
		total_sum += sum;
		if (sum > 4000000)
			break;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f", total_sum);

	return (0);
}
