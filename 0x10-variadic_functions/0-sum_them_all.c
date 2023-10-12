#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: a parameter
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
