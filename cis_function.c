#include "main.h"

/**
 * print_char - helper function to print char
 * @args: list of arguments
 * @index: to move th current *index,
 * two places forward
 * does not return
 */
void print_char(va_list args, int *index)
{
	char c = va_arg(args, int);

	(*index) += 2;
	putchar(c);
}

/**
 * print_str - helper function to print string
 * @args: list of arguments
 * @index: to move th current *index,
 * two places forward
 * does not return
 */
void print_str(va_list args, int *index)
{
	char *s = va_arg(args, char *);

	(*index) += 2;
	write(1, s, strlen(s));
}

/**
 * print_per - helper function to print %
 * @args: list of arguments
 * @index: to move th current *index,
 * two places forward
 * does not return
 */
void print_per(va_list args, int *index)
{
	char per = va_arg(args, int);

	(*index) += 2;
	putchar(per);
}

/**
 * print_int - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * @index: to move th current *index,
 * the length of the string forward
 * doesn't return value
 */
void print_int(va_list args, int *index)
{
	char *n = va_arg(args, char *);

	(*index) += 2;
	write(1, n, strlen(n));
}
