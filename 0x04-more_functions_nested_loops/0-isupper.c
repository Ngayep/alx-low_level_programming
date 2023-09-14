#include "main.h"

/**
* _isupper - checks for uppercase character
* Return: 1 if (Success) 0 otherwise
* @c: is the character to check
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
