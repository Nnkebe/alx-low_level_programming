#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Function reads a text file & prints to the POSIX STDOUT.
 *
 * @filename: This is the actual text file being read.
 *
 * @letters: These are the numbe of letters to be read.
 *
 * Return: w- ON success the num of bytes to be read & printed.
 *  on file return 0 / file name is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
