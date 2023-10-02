#include <stdio.h>

/**
 * main - prints all arguments it receives
 * followed by a new line
 * @argc :  count of arguments supplied to the program
 * @argv : array of pointer to char
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
