#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>


int _printf(const char *format, ...);

/* modules */
int _putchar(char c);

/* handle_functions.c */

int handle_string(va_list mt);
int handle_percent(va_list md);
int handle_char(va_list mp);
int handle_int(int i);

/* utility functions */

#endif /* MAIN_H */
