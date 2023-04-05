/**
 * _pow_recursion - function
 *
 * @x: parameter1
 *
 * @y: parameter2
 *
 * Return: fact
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
