#include "main.h"
#include <stdio.h>

/**
 * handle_int - A handler function that prints an integer
 * @i: integer
 * Return: number of characters printed
 */


int handle_int(int i)
{

	long int num;
	int count;
	int aux_v, bs;

	count = 0;
	numb = i;

	if
	{
		num *= -1;
		_putchar(45);
		count++;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		count++;
	}
	if (num > 9)
	{
		bs = 10;

		while (num / bs > 9)
		{
			bs *= 10;
		}

		while (bs > 0)
		{
			aux_v = num / bs;
			num = num % bs;
			_putchar(aux_v + 48);
			bs = bs / 10;
			count++;
		}
	}
	return (count);
}
