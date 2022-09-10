#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	num = 0;

	while (num < 10)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
