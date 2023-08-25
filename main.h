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
/**
 * struct printer - prints format specified pointers
 * @specifier: the ID of the format
 * @print: function pointer
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
int print_octal(va_list args);
int print_hex(va_list args);
int print_heX(va_list args);
int _intlen_recursion(int num);
int *_twosComplement(int *binary, int bin);
int *_convert_binary(int num);
int _loop_print(unsigned int num, int arrSize);
int _arrlen(int *arr[]);

#endif /* MAIN_H */
