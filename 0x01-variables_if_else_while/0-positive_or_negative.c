#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Program to print the sign of a number
 *
 * Description: this will print out a statement on the sign of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
