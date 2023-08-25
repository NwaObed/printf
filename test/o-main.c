#include "../main.h"

int main(void)
{
	_printf("%s\n%c\n%o\n%i\n%%\n%X\n%x\n%u\n%b\n%d\n", "String", 'D', 45, INT_MIN, 789, 456, 969656, 98, 504);
	_printf("%d\n", INT_MIN);
	_printf("%d\n", 1024);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	return (0);
}
