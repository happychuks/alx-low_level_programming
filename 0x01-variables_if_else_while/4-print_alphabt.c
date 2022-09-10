#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char letter; /*Declaration*/

	/*for letter*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q') /*continue if q*/
			continue;

		else if (letter == 'e')/*continue if e*/
			continue;

		putchar(letter);/*print letter*/
	}

	putchar('\n'); /*new line*/

	return (0);

}
