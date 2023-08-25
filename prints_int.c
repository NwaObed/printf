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
	int r_zero = 0;

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
		if (dgt != 0 || r_zero)
		{
			_putchar('0' + dgt);
			r_zero = 1;
			count++;
		}
		d %= div;
		div /= 10;
	}

	_putchar(end + '0');
	count++;
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
	int j, div = 1, end = d % 10;
	int r_zero = 0;

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
		if (dgt != 0 || r_zero)
		{
			_putchar('0' + dgt);
			r_zero = 1;
			count++;
		}
		d %= div;
		div /= 10;
	}

	_putchar(end + '0');
	count++;
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
	int count = 0, bits = 0;
	size_t tmp, div = 1;
	int i, bit;

	tmp = u;
	while (tmp > 0)
	{
		bits++;
		tmp /= 10;
	}
	if (u == 0)
	{
		_putchar('0');
		count++;
	} else
	{
		for (i = 1; i < bits; i++)
			div *= 10;
		while (div > 0)
		{
			bit = u / div;
			_putchar(bit + '0');
			u %= div;
			div /= 10;
			count++;
		}
	}

	return (count);
}
