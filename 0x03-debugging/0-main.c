#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i, result;

	i = 0;
	result = positive_or_negative(i);
	printf("%d is zero\n", result);
	return (0);
}
