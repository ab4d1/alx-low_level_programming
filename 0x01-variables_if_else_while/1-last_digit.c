#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry
 * print some
 * Return:0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("Last digit of %i is %i and is greater than 5", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %i is %i and is 0", n, lastDigit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0", n, lastDigit);

	return (0);
}