#include "main.h"
/**
 * print_square - this function print square.
 * @size: holdes square value
 * Return: nothing
 */
void print_square(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
