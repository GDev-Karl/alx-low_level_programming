#include "main.h"

/**
 * create_file - that creates a file
 * @filename: the name of the file
 * @text_content: content of the file
 *
 * Return: 1 if success 0 otherwise
*/
int create_file(const char *filename, char *text_content)
{
	int fd, text_length, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600); /* rw------- */

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytes_written = write(fd, text_content, text_length);

		if (bytes_written == -1 || bytes_written != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
