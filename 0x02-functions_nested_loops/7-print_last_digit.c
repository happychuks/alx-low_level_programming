#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: this is an input interger
 * @48: this is teh ascii repres of num 0
 * Return: Returns the value of the last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
