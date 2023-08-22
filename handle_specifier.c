#include "main.h"

/**
 * print_char - helper function to print char
 * @args: list of arguments
 * Return: 1 - length of char
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (1);
}

/**
 * print_str - helper function to print string
 * @args: list of arguments
 * Return: returns length of string
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int i, s_len;

	if (s == NULL)
		return (-1);
	else
	{
		s_len = strlen(s);
		for (i = 0; i < s_len; i++)
			putchar(s[i]);
	}
	return (s_len);
}

/**
 * print_per - helper function to print %
 * @args: list of arguments
 * Return: 1
 */
int print_per(va_list args __attribute__((unused)))
{
	char per = '%';

	putchar(per);
	return (1);
}

/**
 * print_int - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * Return: integer printed ?
 */
int print_int(va_list args __attribute__((unused)))
{
	int i = va_arg(args, int);
	int ind = 0, r;
	int count = 0;
	char result[2];
	int dgt, j = i;
	char *ptr;
	
	if (i < 10)
		putchar('0' + i);
	else
	{
		while (i >= 10)
		{
			i /= 10;
			count++;
		}
		i = j;
		while (i >= 10)
		{
			dgt = i % 10;
			result[ind] = dgt;
			i /= 10;
			ind++;
		}
		result[ind++] = i;
		printf("%c", result[0]);
		for (r = (strlen(result) - 1); r == 0; r--)
		{
			if (result[r] == '\0')
				continue;
		else
			 printf("I am reversed");
			putchar(result[r]);
		}
	}
/*	printf("%d", count);*/
/*	printf("%s", result);*/
	return (count);
}
