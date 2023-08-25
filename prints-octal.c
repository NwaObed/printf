#include "main.h"

/**
 * print_octal - converts unsigned int to octal
 * @args: list of args
 * Return: numoer of output count
 */
int print_octal(va_list args)
{
	size_t o = va_arg(args, unsigned int);
	char octal[32];
	int ind = 0, i, count = 0;

	if (o == 0)
	{
		_putchar('0');
		count++;
	} else
	{
		while (o > 0)
		{
			octal[ind++] = (o % 8) + '0';
			o /= 8;
		}
		for (i = ind - 1; i >= 0; i--)
		{
			_putchar(octal[i]);
			count++;
		}
	}
	return (count);
}
