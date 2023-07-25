#include "main.h"
#include <stdio.h>
/**
 *_printf - A function that prints number of characters
 *@format: variable
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += handle_char(args);
					break;
				case 's':
					count += handle_string(args);
					break;
				case '%':
					count += handle_percent(args);
					break;
				case 'd':
				case 'i':
					count += handle_int(va_arg(args, int));
					break;
			default:
			_putchar(*format);
			count++;
			break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
