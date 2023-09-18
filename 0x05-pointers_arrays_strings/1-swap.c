#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: pointer 1
 * @b: pointer 2
 * Return; 0
 */

void swap_int(int *a, int *b)
{
	int x; //this holds the initial value of *a

	x = *a;
	*a = *b;
	*b = x;

}
