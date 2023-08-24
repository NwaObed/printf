#include "main.h"

/**
 * print_char - helper function to print char
 * @args: list of arguments
 * Return: 1 - length of char
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_str - helper function to print string
 * @args: list of arguments
 * Return: returns length of string
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int i, s_len;

	if (s == NULL)
	{
		s = "(null)";
		for (i = 0; i < 6; i++)
			_putchar(s[i]);
		return (6);
	}
	s_len = strlen(s);
	for (i = 0; i < s_len; i++)
		_putchar(s[i]);
	return (s_len);
}
/**
 * print_per - helper function to print %
 * @args: list of arguments
 * Return: 1
 */
int print_per(va_list args __attribute__((unused)))
{
	char per = '%';

	_putchar(per);
	return (1);
}
