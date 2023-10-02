#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * followed by a new line
 * @argc :  count of arguments supplied to the program
 * @argv : array of pointer to char
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	
	printf("%d\n", argc);
	argv[i] = 0;
	return (0);
}
