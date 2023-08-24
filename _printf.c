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
		{"%c", print_char}, {"%b", print_binary},
		{"%s", print_str},
		{"%%", print_per},
		{"%i", print_int}, {"%d", print_decimal},
		{"%u", print_unsigned_int},
		{"%o", print_unsigned_octal}
	};

	int i = 0, r_len = 0;
	/* stores the size of the print_func */
	size_t j, s_num = sizeof(print_func) / sizeof(print_func[0]);

	va_start(args, format);

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		for (j = 0; j < s_num; j++)
		{
			if (format[i] == print_func[j].specifier[0]
				&& format[i + 1] == print_func[j].specifier[1])
			{
				r_len += print_func[j].print(args);
				i += 2;
				break;
			}
		}
		if (j < s_num)
			continue;
		_putchar(format[i]);
		r_len++;
		i++;
	}

	return (r_len);
	va_end(args);
}
