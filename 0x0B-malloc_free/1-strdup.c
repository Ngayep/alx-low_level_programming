#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * memory space containing a copy of the string given as parameter
 * @str : pointer to a string
 * Return: pointer to newly allocated space and Null is str NULL
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	str1 = (char *)malloc(size * sizeof(char));
	if (str1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str1[i] = str[i];
	}

	return (str1);
}
