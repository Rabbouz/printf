#include <unistd.h>
#include <stdarg.h>
/**
 * _printc - print a charachter of string
 * @chara: charachter to print
 * Return: always 1 (succes)
 */
int _printc(va_list chara)
{
	char the_charachter = (char)va_arg(chara, int);

	_putchar(the_charachter);
	return (1);
}
