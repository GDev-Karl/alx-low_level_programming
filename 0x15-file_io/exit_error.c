#include "main.h"

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
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
