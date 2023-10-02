#include <stdio.h>

/**
 * main - prints the name of the file followed by a new line
 * @argc :  count of arguments supplied to the program
 * @argv : array of pointer to char
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	argv[argc] = '\0';
	return (0);
}
