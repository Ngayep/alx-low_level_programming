#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * m - stores 2 int in base 10 and prints the multiplication
 * @num1: number to be multiplied
 * @num2: number to be multiplied
 */

void m(int num1, int num2)
{
	int *t;
	int mul;

	t = malloc(sizeof(int) * 2);
	if (t == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	t[0] = num1;
	t[1] = num2;

	if (num1 >= 0 && num2 >= 0)
	{
		mul = t[0] * t[1];
		printf("%d * %d is equal to %d\n", num1, num2, mul);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	free(t);
}

/**
 * main - checks argument count and calls m
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	m(num1, num2);
	return (0);
}
