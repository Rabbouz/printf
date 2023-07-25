#include <stdarg.h>
#include "header.h"
/**
 * handle_char - A handler function that prints a character
 *@mp: argument
 * Return: int
*/

int handle_char(va_list mp)
{
	char c = (char)va_arg(mp, int);

	return (_putchar(c));
}
