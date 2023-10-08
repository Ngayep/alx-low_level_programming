#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index of array s2
 * Return: pointer to a new buffer containing s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int l1;
	unsigned int l2;
	unsigned int l;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	l = l1 + l2 + 1;

	p = (char *)malloc(l * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	if (n >= l2)
	{
		for (j = 0; j < l2; j++)
		{
			p[i + j] = s2[j];
		}
	}
	else
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
