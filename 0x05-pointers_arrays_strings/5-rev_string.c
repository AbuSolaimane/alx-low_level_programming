#include <string.h>

/**
 * rev_string - function
 *
 * @s: parameter
 */
void rev_string(char *s)
{
	int i, lenOfS;

	lenOfS = strlen(s);

	for (i = 0; i < lenOfS / 2; i++)
	{
		int t;

		t = s[i];
		s[i] = s[lenOfS - 1 - i];
		s[lenOfS - 1 - i] = t;
	}
}
