#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Checks if a number is positive, negative or zero
 * Return: 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0 ) {
		printf("number is positive\n");
	}
	else if ( n == 0 ) {
		printf("number is zero\n");
	}
	else {
		printf("number is negative\n");
	}
	return (0);
}
