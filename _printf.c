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
		/*if (format[i] == '%' && strcmp(&format[i + 1],*/
		/*	&(print_func[j].specifier[1])) == 0)*/

		for (j = 0; j < 4; j++)
		{
			if (format[i] == '%'
				&& format[i + 1] == (print_func[j].specifier[1]))
			{
				print_func[j].print(args, &i);
				break;
			}
		}


/*		else*/
			/*write(1, &format[i], 1);*/
		i++;
	}
	va_end(args);

	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	return (i);
}
