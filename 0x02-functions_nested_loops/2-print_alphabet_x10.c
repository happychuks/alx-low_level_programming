#include "main.h"

/**
 * print_alphabet_x10 -> This prints lowercase alphabets 10 times
 *
 * Return: a-z x10
 */

void print_alphabet_x10(void)
{
	int n, i;

	n = 0;

	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		n++;

		_purchar('\n');
	}

}
