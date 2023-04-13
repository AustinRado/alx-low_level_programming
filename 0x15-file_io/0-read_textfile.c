#include "main.h"

/**
 * read_textfile - reads a text file and prints its contents to standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read from the file
 *
 * Return: the number of bytes printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, num;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	num = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);
	return (num);
}

