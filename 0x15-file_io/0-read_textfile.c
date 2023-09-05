#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text file and also prints it to the POSIX stdout.
 * @filename: A pointer to the name of a file.
 * @letters: a number of letters
 *           function must read and print.
 *
 * Return: If the function is failing or filename is NULL - 1.
 *         O/w - the number of bytes and functions can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
