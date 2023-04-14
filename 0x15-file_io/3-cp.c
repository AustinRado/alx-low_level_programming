#include "main.h"
#include <stdio.h>

/**
 * main - copies contents of file to another file
 * @argc: No of arguments passed
 * @argv: Arrays
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int from, to, just_bytes;
char buff[BUFF_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

from  = open(argv[1], O_RDONLY);
if (from  == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

while ((just_bytes = read(from, buff, BUFF_SIZE)) > 0)
{
if (to == -1 || write(to, buff, just_bytes) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (just_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if ((close(from)) == -1 || (close(to)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
exit(100);
}

return (0);
}
