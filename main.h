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
	void (*print)(va_list args, int *index);
} print_it;

/* prototypes */
int _printf(const char *format, ...);
void print_char(va_list args, int *index);
void print_str(va_list args, int *index);
void print_per(va_list args, int *index);
void print_int(va_list args, int *index);

#endif /* MAIN_H */
