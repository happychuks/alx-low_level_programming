#include <stdio.h>

/**
 * main - Prints alphabet in lowercase using for loop and putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp_lower;
	

	for (alp_lower = 'a'; alp_lower < 'z'; alp_lower++)
	{
		putchar(alp_lower);
	}

	putchar('\n');

	return (0);
}
