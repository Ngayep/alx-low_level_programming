#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string whose lenght is to be returned
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
