#include "main.h"

/**
 * print_int - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * Return: integer printed ?
 */
int print_int(va_list args)
{
	int d = va_arg(args, int);
	int val = 0, dgt, tmp, count = 0;
	int j, div = 1, end = d % 10;

	d = d / 10;
	tmp = d;

	if (end < 0)
	{
		_putchar('-');
		d = -d;
		end = -end;
		tmp = -tmp;
		count++;
	}
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
		_putchar('0' + dgt);
		d %= div;
		div /= 10;
		count++;
	}

	_putchar(end + '0');
	return (count);
}

/**
 * print_decimal - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * Return: integer printed ?
 */

int print_decimal(va_list args)
{
	int d = va_arg(args, int);
	int val = 0, dgt, tmp, count = 0;
	int j, div = 1;

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
		_putchar('0' + dgt);
		d %= div;
		div /= 10;
		count++;
	}
	if (d == INT_MIN)
		_putchar((d + 1) + '0');
	return (count);
}

/**
 * print_unsigned_int - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * Return: integer printed ?
 */

int print_unsigned_int(va_list args)
{
	size_t u = va_arg(args, unsigned int);
	int val = 0, dgt, tmp, count = 0;
	int j, div = 1;

	tmp = u;
	while (tmp > 0)
	{
		tmp /= 10;
		val++;
	}
	for (j = 0; j < val - 1; j++)
		div = div * 10;
	while (div > 0)
	{
		dgt = u / div;
		_putchar('0' + dgt);
		u %= div;
		div /= 10;
		count++;
	}

	return (count);
}
