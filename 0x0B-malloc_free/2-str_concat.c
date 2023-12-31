#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2, sizeBuffer;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	sizeBuffer = len1 + len2 + 1;
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer; i++)
		i < len1 ? (p[i] = s1[i]) : (p[i] = s2[i - len1]);
	return (p);
}
