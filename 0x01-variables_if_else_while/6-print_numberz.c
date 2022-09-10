#include <stdio.h>

/**
 * main - Entry Point This function prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++) /* the ascii repr of number 0-9 is 48-57 */
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
