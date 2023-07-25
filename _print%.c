#include <stdarg.h>




int _print%(va_list md)
{
	char *str = va_arg(md, char *)

	int i = 0;

	while (*str[i] != '\0')
	{
		if ( str[i] == '%')
		{
			i++;
			if (str[i] == '%')
			{
				_putchar(str[i]);
				i++;
			}
		}
	}
	return (0);
}
