/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(args);
	for (i = 0; i < n; i++)
		sum += var_arg(args, int);
	va_end(args);
	return (sum);
}
