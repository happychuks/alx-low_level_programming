#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int first_nums;
	int second_nums;

	/*for 0-9 with ASCII*/
	for (first_nums = 0; first_nums < 100 ; first_nums++)
	{
		for (second_nums = first_nums + 1 ; second_nums < 100; second_nums++)
		{

			putchar (first_nums / 10 + '0'); /*print  first nums, first digit*/
			putchar (first_nums % 10 + '0'); /*print  first nums, second digit*/

			putchar (' ');

			putchar (second_nums / 10 + '0'); /*print  sencond nums, first digit*/
			putchar (second_nums % 10 + '0'); /*print  second nums, second digit*/

			/*break program if the condition is true (if is 98 99)*/
			if (first_nums == 98 && second_nums == 99)
			{
				break;
			}

			putchar(',');
			putchar (' ');

		}

	}

	putchar('\n');

	return (0);

}
