#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @args: list of args
 * Return: number of output count
 */
int print_binary(va_list args)
{
	int b = va_arg(args, unsigned int);
	int size = _intlen_recursion(b);
	int binary[size], bit;
	int ind = 0, i, count = 0;

	if (b == 0)
	{
		_putchar('0');
		count++;
	}
	while (b > 0)
	{
		bit = b % 2;
		binary[ind++] = bit;
		b /= 2;
	}
	for (i = ind - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		count++;
	}
	return (count);
}
