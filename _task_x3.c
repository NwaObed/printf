#include "main.h"
/**
 * print_unsigned_int - prints the format string
 * if no specifier is encountered
 * @args: list of arguments
 * Return: integer printed ?
 */
int print_unsigned_int(va_list args __attribute__((unused)))
{
	unsigned int num = va_arg(args, unsigned int);
	int arrSize = get_byte(num);
	
	_loop_print(num, 20);
}
/**
  * print_unsigned_octal - prints the format string
  * if no specifier is encountered * @args: list of arguments
  * Return: integer printed ?
  */
int print_unsigned_octal(va_list args __attribute__((unused)))
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int octalNum = _convert_int_to_oct(num);
	int count, arrSize = get_byte(num);

	count = _loop_print(octalNum, arrSize);
	return (count);
}
/**
  * _convert_int_to_oct - Convert decimal to octal
  * @num: int to convert
  * Return: Nothing
  */
unsigned int _convert_int_to_oct(unsigned int num)
{
	unsigned int octalNum = 0;
	unsigned int remainder, place = 1;

	while (num > 0)
	{
		remainder = num % 8;
		octalNum += remainder * place;
		num /= 8;
		place *= 10;
	}
	return (octalNum);
}

/**
  * _loop_print - Loop printing with a while statement
  * Return: number of bytes
  */
int _loop_print(unsigned int num, int arrSize)
{
	unsigned int dgt;
	unsigned int result[arrSize];
	int r, ind = 0, count = 0;
	unsigned int d = 10; 

	while (num >= 10)
	{
		dgt = num % d;
		result[ind++] = dgt;
		num /= d;
	}
	result[ind++] = num;
	for (r = ind - 1; r >= 0; r--)
	{
		/*      _putchar(result[r]);*/
		printf("%u", result[r]);
		count++;
	}
	return (count);
}
/**
  * get_byte - Count the number of digits in a number
  * @num: The number to count
  * Return: The number of bytes counted
  */
int get_byte(int num)
{
	int dgt;
	int count = 1;/** if num < 10, we will return this without loop*/
	while (num >= 10)
	{
		dgt = num % 10;
		num /= 10;
		count++;

	}
	return (count);
}
