#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiple argument
 * @argc: int
 * @argv: list
 * Return: int
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);

	}
	return (0);
}
