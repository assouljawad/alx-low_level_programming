#include "main.h"
/**
* print_most_numbers - is functions that checks is the c is digit.
* Return: if digit return 1 else return 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 52 && i != 50)
		{
			_putchar(i);
		};
	};
	_putchar('\n');
}
