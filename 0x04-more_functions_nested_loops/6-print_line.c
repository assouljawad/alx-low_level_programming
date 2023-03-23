#include "main.h"
/**
* print_line - this func prints straight line
* @n: n is number of lines
*/
void print_line(int n)
{
	int i;

	if (n != 0 || n < 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
