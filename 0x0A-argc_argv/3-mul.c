#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the results of the multiplication
 * of two numbers, followed by a new line
 * @argc :  count of arguments supplied to the program
 * @argv : array of pointer to char
 * Return: 0 if success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = num2 = 0;
	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
