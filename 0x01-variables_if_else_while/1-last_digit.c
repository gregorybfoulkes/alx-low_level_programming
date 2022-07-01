#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of the number stored in n
 *
 * Return: Always 0 (Success
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
