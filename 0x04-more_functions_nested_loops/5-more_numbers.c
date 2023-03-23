i#include "main.h"
/**
* more_numbers - is functions that checks is the c is digit.
* Return: if digit return 1 else return 0
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i < 15; i++)
	{
		if (i >= 10)
		{
			_putchar((i / 10) + 48);
		}
		_putchar((i % 10) + 48);
	}
		_putchar('\n');
	}
}
