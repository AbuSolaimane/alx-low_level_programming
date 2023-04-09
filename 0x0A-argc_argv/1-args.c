#include <stdio.h>
/**
 * main - function
 *
 * @argc: arguments count
 *
 * @argv: arguments vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute((unused))__)
{
	printf("%d\n", argc - 1);
	return (0);
}
