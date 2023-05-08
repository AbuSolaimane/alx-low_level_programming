#include "main.h"

char *new_buffer(char *file);
void close_file(int fd);

/**
 * new_buffer - function
 *
 * @filename: param
 *
 * Return: return
 */
char *new_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - function.
 *
 * @fildes: param
 */
void close_file(int fildes)
{
	int c;

	c = close(fildes);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes);
		exit(100);
	}
}

/**
 * main - function
 *
 * @argc: param
 *
 * @argv: param
 *
 * Return: return
 */
int main(int argc, char *argv[])
{
	int from, to, rr, ww;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = new_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rr = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		ww = write(to, buffer, rr);
		if (to == -1 || ww == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rr = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rr > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
