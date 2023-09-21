#include "main.h"

/**
 * main - Prints _putchar followed by a new line
 *
 * Return: 0 if Success
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	while (p[i])
	{
		_putchar(p[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
