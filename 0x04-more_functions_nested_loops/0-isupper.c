#include "main.h"

/**
 * _isupper - take the character and return 0 || 1
 * Description: check character is upper case or not
 * @c: check character
 * Return: 0(notSuccess) or 1(Success)
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	return (0);
}
