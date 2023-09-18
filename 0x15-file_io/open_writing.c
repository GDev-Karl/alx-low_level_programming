#include "main.h"

/**
 * open_file_for_writing - open file for writing
 * @file_name: the name of the file
 *
 * Return: Nothing
*/
int open_file_for_writing(const char *file_name)
{
	int fd;

	fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
	 S_IWUSR | S_IRGRP | S_IROTH);

	if (fd == -1)
	{
		exit_with_error(99, "Error: Can't write to %s\n", file_name);
	}

	return (fd);
}
