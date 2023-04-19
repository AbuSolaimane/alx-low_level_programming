
/**
 * print_name - function
 *
 * @name: my name
 *
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
