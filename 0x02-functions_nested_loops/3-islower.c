#include "main.h"

/**
 * _islower - This check for lowercase character
 * @c: this is the single character input
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
