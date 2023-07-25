#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character
 *
 * Return: On success, return 1. On error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
