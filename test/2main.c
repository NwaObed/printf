#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%b", 1024);
	len2 = printf("10000000000");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("Lengths:[%d] \n", len);
		printf("Lengths2:[%d]\n", len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
