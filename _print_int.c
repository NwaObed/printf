#include "main.h"

int print_int(va_list args __attribute__((unused)))
{
	int i = va_arg(args, int);
	int ind = 0, r;
	int count = 0;
	char result[10];
	int dgt, j = i;
	char *ptr;
	
	if (i < 10)
		putchar('0' + i);
	else
	{
/*		while (i >= 10)*/
	/*	{*/
		/*	i /= 10;*/
/*			count++;*/
/*		}*/
/*		i = j;*/
		while (i >= 10)
		{
			printf("I am looping \n");
			printf("Step: %d\n\n", i);
			dgt = i % 10;
			result[ind] = dgt;
			i /= 10;
			ind++;
		}
		result[ind++] = i;
		printf("%c", 'o');
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

