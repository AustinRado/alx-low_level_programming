#include "main.h"

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
	int fd, numletter, rwr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);
	if (text_content != NULL)
	{
		numletter = 0;
		while (text_content[numletter] != '\0')
			numletter++;
		rwr = write(fd, text_content, numletter);
		if (rwr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
