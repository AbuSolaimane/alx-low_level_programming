#include "3-calc.h"

/**
 * get_op_func - function
 *
 * @s: the operator given by the user
 *
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	switch (s)
	{
		case '+':
			return (op_add);
		case '-':
			return (op_sub);
		case '*':
			return (op_mul);
		case '/':
			return (op_div);
		case '%':
			return (op_mod);
		default:
			return (NULL);
	}
}
