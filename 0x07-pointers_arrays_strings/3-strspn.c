#include "main.h"

/**
 * *_strspn -  gets the lenght of a prefix substring
 * @s: string segment
 * @accept: prefix substring
 * Return: the number of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		int flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			return (i);
		}
	}

	return (i);
}
