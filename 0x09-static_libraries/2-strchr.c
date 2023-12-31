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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
