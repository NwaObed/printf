#include "main.h"

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
				print_func[j].print(args, &i);
				i += 2;
				break;
			}
			j++;
		}
		if (j == 4)
		{
			putchar(format[i]);
			i++;
		}
		i++;
	}
	va_end(args);

	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	return (i);
}
