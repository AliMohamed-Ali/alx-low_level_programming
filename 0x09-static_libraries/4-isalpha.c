#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The character to check
 * Description: check character is letter or not
 * Return: Always void
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
