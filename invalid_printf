#include "main.h"

/**
 * print_char - helper function to print char
 * @args: list of arguments
 * does not return
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
}

/**
 * print_str - helper function to print string
 * @args: list of arguments
 * does not return
 */
void print_str(va_list args)
{
	char *s = va_arg(args, char *);

	write(1, s, strlen(s));
}

/**
 * print_per - helper function to print %
 * @args: list of arguments
 * does not return
 */
void print_per(va_list args)
{
	char per = va_arg(args, int);

	putchar(per);
}

/**
 * print_int - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * doesn't return value
 */
void print_int(va_list args)
{
	int *n = va_arg(args, int *);

	write(1, n, 4);
}

/**
 * _printf - Function that produces output according to a format.
 * @format: the string to output
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	print_it print_func[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_per},
		{"%d", print_int},
	};

	int i = 0, j;

	va_start(args, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == '%' && strcmp(&format[i], print_func[j].specifier) == 0)
			{
				print_func[j].print(args);
				i += 2;
				break;
			}
			j++;
		}
		if (format[i] != '%'
			&& (format[i + 1] != 'c' || format[i + 1] != 's' || format[i + 1] != '%'))
			putchar(format[i]);
		i++;
	}
	va_end(args);

	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	return (i);
}
