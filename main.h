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
int handle_string(char *s);
int handle_percent(void);
int handle_char(char *c);
int handle_int(int i);

#endif /* MAIN_H */
