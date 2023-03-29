#include <ctype.h>
#include <string.h>

/**
 * cap_string - function
 *
 * @str: parameter
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int len = strlen(str);
	int cap_next = 1;

	for (int i = 0; i < len; i++)
	{
		if (cap_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == ',' || str[i] == ';' ||
			str[i] == '.' || str[i] == '!' || str[i] == '?'
			|| str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap_next = 1;
		}
	}
	return (str);
}
