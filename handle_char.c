#include <stdarg.h>
#include "main.h"

/**
 * handle_char - A function that prints a character
 * @c: argument
 * Return: number of characters printed (1)
 */

int handle_char(char *s)
{
	_putchar(*s);
	return (1);
}
