#include "main.h"
#include "string.h"

/**
 * append_text_to_file - entry point, appends text at
 *the end of a file
 * @filename: file name
 * @text_content: this is the added content
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_bytes_written = 0;
	int text_len = 0;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);

if (text_content)
{
	for (text_len = 0; text_content[text_len]; text_len++);
	num_bytes_written = write(fd, text_content, text_len);
	if (num_bytes_written != text_len)
	{
		close(fd);
			return (-1);
	}
}

close(fd);
return (-1);
}
