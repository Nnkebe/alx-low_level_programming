#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file & prints it to the POSIX STDOUT.
 *
 * @filename: This is the text file being READ
 *
 * @letters: These are the number of letters to be READ
 *
 * Return: w- the actual num of bytes that are read & printed,
 *  0 on failure or the file name is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd =  open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
