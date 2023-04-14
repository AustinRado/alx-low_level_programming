#include "main.h"
#include <stdio.h>

/**
 * main - this is the entry point
 * @argc: num of arg passed to the program
 * @argv: this the array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fdf, fdt, close_ff, close_ft;
	ssize_t file_from, file_to;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(argv[1], O_RDONLY);
	if (fdf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(fdf);
		exit(99);
	}
	while ((file_from = read(fdf, buf, sizeof(buf))) > 0)
	{
		file_to = write(fdt, buf, file_from);
		if (file_to < 0 || file_to != file_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(98);
		}
	}
		close_ff = close(fdf);
		close_ft = close(fdt);
		if (close_ff < 0 || close_ft < 0)
		{
			if (close_ff < 0)
				dprintf(STDERR_FILENO, "Error: Can't close file %d\n", fdf);
			if (close_ft < 0)
				dprintf(STDERR_FILENO, "Error: Can't close file %d\n", fdt);
			exit(100);
		}
		return (0);
	}
