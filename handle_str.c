#include <stdarg.h>
#include "main.h"

/**
 * handle_string - A function that prints a string
 * @s: string
 * Return: number of characters printed
 */
int handle_string(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		cnt++;
		s++;
	}
	return (cnt);
}
