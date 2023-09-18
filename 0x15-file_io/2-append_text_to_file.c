#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of file
 * @text_content: content of the file
 *
 * Return: 1 for success -1 otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_length, bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	text_length = strlen(text_content);
	bytes_written = write(fd, text_content, text_length);

	if (bytes_written == -1 || bytes_written != text_length)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
