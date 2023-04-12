#include "main.h"

/**
 *  _isdigit - take n and return 0 || 1
 * Description: check character is digit or not
 * @c: check character
 * Return: 0(notSuccess) or 1(Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
