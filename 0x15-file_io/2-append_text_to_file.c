#include "main.h"

/**
 * append_text_to_file - function.
 *
 * @filename: param
 *
 * @text_content: param
 *
 * Return: return
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oo, ww, length = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	oo = open(filename, O_WRONLY | O_APPEND);
	ww = write(oo, text_content, length);
	if (oo == -1 || ww == -1)
		return (-1);
	close(oo);
	return (1);
}
