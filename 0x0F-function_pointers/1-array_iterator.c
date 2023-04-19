/**
 * array_iterator - executes a function
 *
 * @array: array
 *
 * @size: size
 *
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
