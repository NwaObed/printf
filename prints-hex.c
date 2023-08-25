#include "main.h"

/**
 * print_hex - converts unsigned int th hexa
 * @args: list of args
 * Return: numoer of output count
 */
int print_hex(va_list args)
{
	size_t h = va_arg(args, unsigned int);
	char hexa[32];
	char hex[] = "0123456789abcdef";
	int ind = 0, i;

	while (h > 0)
	{
		hexa[ind++] = hex[h % 16];
		h /= 16;
	}
	for (i = ind - 1; i >= 0; i--)
	{
		_putchar(hexa[i]);
	}
	return (ind);
}

/**
 * print_heX - converts unsigned int th hexa
 * @args: list of args
 * Return: numoer of output count
 */
int print_heX(va_list args)
{
	size_t h = va_arg(args, unsigned int);
	char hexA[32];
	char hex[] = "0123456789ABCDEF";
	int ind = 0, i;

	while (h > 0)
	{
		hexA[ind++] = hex[h % 16];
		h /= 16;
	}
	for (i = ind - 1; i >= 0; i--)
	{
		_putchar(hexA[i]);
	}
	return (ind);
}
