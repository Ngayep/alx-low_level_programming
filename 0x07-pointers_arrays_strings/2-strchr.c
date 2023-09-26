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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
