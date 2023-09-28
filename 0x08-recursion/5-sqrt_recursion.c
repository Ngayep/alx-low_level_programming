#include "main.h"

int _sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to carry operation
 * Return: natural square root if success
 * -1 if error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - recurses to find the sqrt of a number
 * @guess: current value for the sqrt
 * @n: the original number
 * Return: the sqrt of -1
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (_sqrt_helper(n, guess + 1));
}
