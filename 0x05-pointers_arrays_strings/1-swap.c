#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: pointer to one of the values to be swapped
 *@b: pointer to one of the values to be swapped
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
