#include "main.h"

/**
 * _isalpha - This function check for alphabetic character
 * @c: This is the character input
 * Return: 1 if c is a letter, lowercase or uppercase, else 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

	_putchar('\n');
}
