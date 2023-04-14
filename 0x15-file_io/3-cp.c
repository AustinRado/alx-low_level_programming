#include "main.h"
#include <stdio.h>

/**
 * error_file -entry point,check if files
 * can be open
 * @file_from: source file descriptor
 * @file_to: destination file descripto
 * @file_from_name: source file name
 * @file_to_name: destination file name
 *
 * Return: void
 */
void error_file(int file_from, int file_to, char *file_from_name,
		char *file_to_name)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from_name);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to_name);
		exit(99);
	}
}
#include "main.h"
#include <stdio.h>

/**
 * main - checking code for ALX student
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t num_read, num_written;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv[1], argv[2]);

	while ((num_read = read(file_from, buf, 1024)) > 0)
	{
		num_written = write(file_to, buf, num_read);
		if (num_written == -1)
			error_file(-1, file_to, argv[1], argv[2]);
	}
	if (num_read == -1)
		error_file(-1, file_to, argv[1], argv[2]);

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	exit(100);
	}
	return (0);
}


