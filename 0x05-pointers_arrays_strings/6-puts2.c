#include "main.h"

/**
 * puts2 - print one of two char of a string
 * @str: char array string type
 * Description: Print first char then third, then fifth...
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
