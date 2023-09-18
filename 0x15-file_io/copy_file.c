#include "main.h"

/**
 * copy_file_contents - copy the content of a file in to another
 * @source_fd: source file
 * @dest_fd: destination file
 *
 * Return: Nothing
*/
void copy_file_contents(int source_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	int bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			exit_with_error(99, "Error: Can't write to destination file\n", "");
		}
	}

	if (bytes_read == -1)
	{
		exit_with_error(98, "Error: Can't read from source file\n", "");
	}
}
