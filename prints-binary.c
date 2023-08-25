#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @args: list of args
 * Return: number of output count
 */
int print_binary(va_list args)
{
	int b = va_arg(args, unsigned int);
	int binary[32], bit;
	int neg = 0;
	int ind = 0, i, count = 0;

	if (b < 0)
	{
		neg = 1;
		b = -b;
	}
	if (b == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (b > 0)
		{
			bit = b % 2;
			binary[ind++] = bit;
			b /= 2;
		}
		if (neg)
		{
			while (ind < 32)
			{
				binary[ind++] = 1;
			}
		}

		for (i = ind - 1; i >= 0; i--)
		{
			_putchar(binary[i] + '0');
			count++;
		}
	}
	if (neg)
		count -= 1;
	return (count);
}
