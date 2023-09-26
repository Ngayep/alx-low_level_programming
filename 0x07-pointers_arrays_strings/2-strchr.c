#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character whose occurence is checked
 * Return: a pointer to the first occurence of the character
 * Null if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
