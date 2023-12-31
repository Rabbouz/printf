#include "main.h"
#include <stdio.h>
/**
 * _printf - A function that prints the given format
 * @format: The format string containing the specifiers
 * Return: The number of characters printed
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
					count += handle_char(va_arg(args, int));
					break;
				case 's':
					count += handle_string(va_arg(args, char *));
					break;
				case '%':
					count += handle_percent();
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
