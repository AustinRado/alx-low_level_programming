#include "main.h"
#include "string.h"

/**
 * create_file - creates a file
 *
 * @filename: file name
 * @text_content: this is the content to write in file
 *
 * Return: 1 if successful, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_bytes_written;

	if (!filename)
		return (-1);


fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
	return (-1);
num_bytes_written = 0;

if (text_content)
	num_bytes_written = write(fd, text_content, strlen(text_content));
close(fd);

return (num_bytes_written == -1 ? -1 : 1);
}

