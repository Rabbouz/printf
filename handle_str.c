#include <stdarg.h>
#include "header.h"

/**
 * handle_string - A handler function that prints a string
 *@mt: argument
 * Return: int
 **/

int handle_string(va_list mt)
{
	char *str = va_arg(mt, char *);
	int cnt = 0;
	while (*str != '\0')
	{
		_putchar(*str++);
		cnt++;
	}
	return (cnt);
}
