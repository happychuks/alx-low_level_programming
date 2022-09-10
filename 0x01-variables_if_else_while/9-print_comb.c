#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	/*for 0-9 with (,)*/
	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		/*if the value is 9 in format ASCII break the program*/
		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar (' ');
	}
	putchar('\n');

	return (0);
}
