#include "main.h"
/**
* print_diagonal - print the diagonal.
* @n: holdes num value.
* Return: return nothing
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		_putchar('\n');
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
	}
}
