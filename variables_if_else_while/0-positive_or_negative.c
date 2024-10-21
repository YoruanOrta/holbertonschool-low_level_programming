#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Include the standard I/O header for printing */

/**
 * main - Entry point of the program
 *
 * This program generates a random number and determines
 * whether it is positive, negative, or zero, then prints
 * the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes here */
	printf("%d ", n);  /* Print the number */
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
