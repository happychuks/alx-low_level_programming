#include "main.h"

/**
 * print_alphabet -> This function prints alphabets in lower case
 *
 * Return: 0 if Success
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
