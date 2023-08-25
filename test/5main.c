#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%b", UINT_MAX);
	len2 = printf("11111111111111111111111111111111");
	printf("\nUINT_MAX:[%u].\n", UINT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("Lengths:[%d]\n", len);
		printf("Lengths2:[%d]\n", len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
