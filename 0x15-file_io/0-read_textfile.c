#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: text file to print
 * @letters: number of letters to be read
 * Return: the content of file or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t write;
	ssize_t read;

	file = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	read = read(file, buffer, letters);
	write = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file);
	return (write);
}