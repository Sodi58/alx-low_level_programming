#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file print to STDOUT.
 * @filename: text file being a read
 * @letters: num of letters to read
 * Return: s- actual num of bytes to read and print
 *        0 when functions fails or filenames is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t s;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	s = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (s);
}
