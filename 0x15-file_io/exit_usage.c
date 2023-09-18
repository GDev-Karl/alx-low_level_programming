#include "main.h"

/**
 * exit_with_usage_error - exit a function with error
 *
 * Return: Nothing
*/
void exit_with_usage_error(void)
{
	exit_with_error(97, "Usage: cp file_from file_to\n", "");
}
