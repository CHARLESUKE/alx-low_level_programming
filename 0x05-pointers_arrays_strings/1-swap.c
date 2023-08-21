#include "main.h"

/**
 * swap_int - a function that swaps the values of two integer
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
