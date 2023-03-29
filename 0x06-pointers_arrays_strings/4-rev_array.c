/**
 * reverse_array - function
 *
 * @a: parameter1
 *
 * @n: parameter2
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int t = *(a + i);
		*(a + i) =  *(a + n - 1 - i);
		*(a + n - 1 - i) = t;
	}
}
