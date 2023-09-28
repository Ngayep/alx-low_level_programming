#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - to get if a number is a prime number
 * @n: number to test
 * Return: 1 if success 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * is_prime_helper - calculates if a number is a prime
 * @n: number to evaluate
 * @i: iterator
 * Return: if a number is prime
 */

int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}
