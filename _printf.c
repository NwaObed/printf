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

	int i = 0, r_len = 0;
	/* stores the size of the print_func */
	size_t j, s_num = sizeof(print_func) / sizeof(print_func[0]);

	va_start(args, format);

	if (format == NULL)
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

	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	return (r_len);
	va_end(args);
}
