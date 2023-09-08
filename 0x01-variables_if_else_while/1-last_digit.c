#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	printf("%d is the last digit of %d\n", lastDigit, n);
	if (n > 5)
		printf("%d is greater than 5\n", lastDigit);
	else if (n == 0)
		printf("%d is 0\n", lastDigit);
	else if (n < 6 && n != 0)
		printf("%d is less than 6 and not 0\n", lastDigit);

	return (0);
}
