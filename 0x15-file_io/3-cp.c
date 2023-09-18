#include "main.h"

/**
* main - check the code
* @argc: argument count
* @argv: argument vectors
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;

	if (argc != 3)
	{
		exit_with_usage_error();
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open_file_for_reading(file_from);
	fd_to = open_file_for_writing(file_to);

	copy_file_contents(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close source file descriptor\n");
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close destination file descriptor\n");
		exit(100);
	}

	return (0);
}
