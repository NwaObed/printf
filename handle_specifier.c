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
		return (-1);
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

/**
 * print_int - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * Return: integer printed ?
 */
int print_int(va_list args __attribute__((unused)))
{
	int i = va_arg(args, int);
	int val = 0, dgt, tmp, count = 0;
	int j, div = 1; /*multiplies by 10*/
	/* to collect most significant digits*/

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		count++;
	}
	tmp = i;
	while (tmp > 0)
	{
		tmp /= 10;
		val++;
	}
	for (j = 0; j < val - 1; j++)
		div = div * 10;
	while (div > 0)
	{
		dgt = i / div;
		_putchar('0' + dgt); /*conversion*/
		i %= div; /*removing most signfct val */
		div /= 10; /*moves to next signfct val */
		count++;
	}
	return (count);
}

/**
 * print_decimal - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * Return: integer printed ?
 */
int print_decimal(va_list args __attribute__((unused)))
{
	int d = va_arg(args, int);
	int val = 0, dgt, tmp, count = 0;
	int j, div = 1; /*multiplies by 10*/
	/* to collect most significant digits*/

	if (d < 0)
	{
		_putchar('-');
		d = -d;
		count++;
	}
	if (d == INT_MIN)
	{
		_putchar('-');
		d = INT_MAX;
		count++;
	}
	tmp = d;
	while (tmp > 0)
	{
		tmp /= 10;
		val++;
	}
	for (j = 0; j < val - 1; j++)
		div = div * 10;
	while (div > 0)
	{
		dgt = d / div;
		_putchar('0' + dgt); /*conversion*/
		d %= div; /*removing most signfct val */
		div /= 10; /*moves to next signfct val */
		count++;
	}
	if (d == INT_MIN)
		_putchar((d + 1) + '0');
	return (count);
}
