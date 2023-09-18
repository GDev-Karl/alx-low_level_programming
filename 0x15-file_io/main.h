#ifndef __MAIN__H__
#define __MAIN__H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_with_error(int code, const char *message, const char *arg);
void exit_with_usage_error(void);
int open_file_for_reading(const char *file_name);
int open_file_for_writing(const char *file_name);
void copy_file_contents(int source_fd, int dest_fd);

#endif
