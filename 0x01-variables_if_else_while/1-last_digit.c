#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int a = (n % 10);

	printf("Last digit of %d is %d and is ", n, a);
	if (a > 5)
	{
		printf("greater than 5");
	}
	else if (a == 0)
	{
		printf("0");
	}
	else
		printf("less than 6 and not 0");
	printf("\n");
	return (0);
}
