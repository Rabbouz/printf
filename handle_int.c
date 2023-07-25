#include <stdarg.h>
#include "main.h"
/**
 * handle_int - A handler function that prints an integer
 * @nt: argument
 * Return: number of characters printed
 */
int handle_int(va_list nt)
{
	int num = va_arg(nt, int);
	int cnt = 0;

	if (num < 0)
	{
		_putchar('-');
		cnt++;
		num = -num;
	}
	cnt += printed_number(num);
	return (cnt);
}
/**
 * printed_number - A  function that prints an integer
 * @num: integer
 * Return:  number of characters printed
 */
int printed_number(int num)
{
	int cnt = 0;

	if (num / 10 != 0)
		cnt += printed_number(num / 10);

	_putchar('0' + (num % 10));
	cnt++;

	return (cnt);
}
