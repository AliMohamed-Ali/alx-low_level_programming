#include "main.h"
/**
 * _islower - Entry point
 * @c: The character to check
 * Description: check character is lower or not
 * Return: Always void
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
