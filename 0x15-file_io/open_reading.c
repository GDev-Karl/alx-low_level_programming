#include "main.h"

/**
 * open_file_for_reading - open file for reading
 * @file_name: the name of the file
 *
 * Return: the file after reading
*/
int open_file_for_reading(const char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);

	if (fd == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", file_name);
	}

	return (fd);
}
