#include "main.h"
/**
* print_diagonal - print the diagonal.
* @n: holdes num value.
* Return: return nothing
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
	}
	putchar('\n');
}
