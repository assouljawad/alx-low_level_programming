#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	i++;
	_putchar('\n');
	}
}
