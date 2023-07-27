#include "main.h"
#include <stdio.h>
/**
 *_printf - A function that prints number of characters
 *@format: variable
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);
	count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*(format) == 'd' || *(format) == 'i')
				count += handle_int(va_arg(ap, int));
			if (*(format) == 's')
				count += handle_string(va_arg(ap, char *));
			if (*(format) == 'c')
				count += handle_char(va_arg(ap,int));
			if (*(format) == '%')
				count += handle_percent();
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}
