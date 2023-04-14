#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int fdf, fdt, close_ff, close_ft;
	ssize_t file_from, file_to;
	char buffer[BUF_SIZE];

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
	file_from = read(fdf, buffer, BUF_SIZE);
	file_to = write(fdt, buffer, file_from);
	while (file_from > 0)
	{
		if (file_to < 0 || file_to != file_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdf);
			exit(99);
		}
	}
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_ff = close(fdf);
	close_ft = close(fdt);
	if (close_ff < 0 || close_ft < 0)
	{
		if (close_ff < 0)
			dprintf(STDERR_FILENO, "Error: Can't clos%d\n", fdf);
		if (close_ft < 0)
			dprintf(STDERR_FILENO, "Error: Can't clos%d\n", fdt);
		exit(100);
	}
	return (0);
}
