#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct printer - print specifiers
 * @specifier: pointer to the format specifier
 * @print: value to print
 *
 * Description: Printf structure
 *              for Holberton project
 */

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
int print_binary(va_list args);
int print_unsigned_int(va_list args);
int _loop_print(unsigned int num, int arrSize);
unsigned int _convert_int_to_oct(unsigned int num);
int print_unsigned_octal(va_list args);
int get_byte(int num);

#endif /* MAIN_H */
