#include "main.h"
#include <stdio.h>

void my_dprintf(int fd, const char *format, const char *arg) {
    char buffer[1024];
    snprintf(buffer, sizeof(buffer), format, arg);
    write(fd, buffer, strlen(buffer));
}

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

/**
 * exit_with_error - exit a function with error
 * @code: code of error
 * @message: error message
 * @arg: error argument
 *
 * Return: Nothing
*/
void exit_with_error(int code, const char *message, const char *arg)
{
	my_dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * exit_with_usage_error - exit a function with error
 *
 * Return: Nothing
*/
void exit_with_usage_error(void)
{
	exit_with_error(97, "Usage: cp file_from file_to\n", "");
}

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		my_dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		my_dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}