#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: 1 if (success) 0 otherwise
 * @c: is the character to check
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);
	else
		return (0);
}
