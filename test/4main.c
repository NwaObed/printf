#include "../main.h"
#include <stdio.h>

#include <limits.h>
#include <stdio.h>
#define ZERO 0

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Null:[%s]\n", (char *)0);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("Length:[%d, %i], [%d, %i]\n", len2, len2, len, len);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Binary:[%b]\n", 48);
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("%d, %d\n", INT_MIN, INT_MAX);


	return (0);
}
