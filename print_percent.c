#include <stdarg.h>
#include "main.h"

/**
 *handle_percent - A handler function that prints a percent
 *@md: argument
 * Return: int
 */

int handle_percent(va_list md)
{
	char *str = va_arg(md, char *);

	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
			{
				_putchar('%');
			}
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	return (0);
}
