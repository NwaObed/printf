#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/* strutures for all cases */
typedef struct printer
{
	const char *specifier;
	int (*print)(va_list args);
} print_it;

/* prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_per(va_list args);
int print_int(va_list args);
int print_decimal(va_list args);

#endif /* MAIN_H */
