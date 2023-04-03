#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
unsigned int itr, jtr;
char *p;

for (itr = 0; itr < 8; itr++)
{
for (jtr = 0; jtr < 8; jtr++)
{
_putchar(a[itr][jtr]);
}
_putchar('\n');
}
}
