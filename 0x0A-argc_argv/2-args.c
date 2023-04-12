#include <stdio.h>
/**
 * main - prints the all argument
 * @argc: int
 * @argv: list
 * Return: int
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argc[i]);
		i++;
	}
	return (0);
}
