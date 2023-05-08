#include "main.h"

/**
 * read_textfile - function
 *
 * @filename: param
 *
 * @letters: param
 *
 * Return: return
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t oo, rr, ww;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	oo = open(filename, O_RDONLY);
	rr = read(oo, buffer, letters);
	ww = write(STDOUT_FILENO, buffer, rr);
	free(buffer);
	if (oo == -1 || rr == -1 || ww == -1 || ww != rr)
		return (0);
	close(oo);

	return (ww);
}
