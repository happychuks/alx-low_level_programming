#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char letter;

	/*for z-a*/
	for (letter = 122 ; letter >= 97; letter--) /* using ASCII representation*/
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);

}
