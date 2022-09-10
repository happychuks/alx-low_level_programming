#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int left;
	int right;
	int center;

	/*for 0-9 with ASCII*/

	for (left = 48; left <= 57; left++)
	{
		for (center = left + 1; center <= 57; center++)
		{
			for (right = center + 1 ; right <= 57; right++)

			{

				putchar(left); /*print  numbers left, center and right*/
				putchar (center);
				putchar (right);


				if ((left == 55) && (center == left + 1) && (right == center + 1))
				{
					break; /*terminate the program*/
				}

				putchar(',');
				putchar (' ');

			}

		}

	}

	putchar('\n');

	return (0);

}
