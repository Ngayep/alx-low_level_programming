#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: is the resulting string
 * @src: is the source  string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while  (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';

	return (dest);
}
