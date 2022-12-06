#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @filename: a pointer to the name of the file
 * @letters: the number of letters the
 *           function should read and print
 * Return: if the function falls or filename is NULL - 0
 *         O/w - the actual number of bytes the function can read
 *         and print
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
}
