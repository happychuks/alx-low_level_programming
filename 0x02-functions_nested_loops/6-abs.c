#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * absolute number: this is a non negative number
 * @i: integer input
 * Return: absolute value of i
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
