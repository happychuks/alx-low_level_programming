#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	int f_digit, l_digit;

	/* 99 is the highest possible 2 digit number)*/
	while (num <= 99)
	{
		f_digit = (num / 10 + '0');
		l_digit = (num % 10 + '0');

		if (f_digit < l_digit)
		{
			putchar(f_digit);
			putchar(l_digit);

			if (num != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		num++;
	}

	putchar('\n');

	return (0);

}
