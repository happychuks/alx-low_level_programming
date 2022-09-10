#include <stdio.h>

/**
 * main - Prints alphabet in lowercase using for loop and putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp_lower[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i=0; i<26; i++)
	{
		putchar(alp_lower[i]);
	}
	putchar('\n');
	return (0);
}
