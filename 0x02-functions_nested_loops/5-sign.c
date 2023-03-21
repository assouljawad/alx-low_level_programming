#include "main.h"
/**
 * print_sign - Checks for the sign of a number.
 * @n: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int print_sign(int n)
{
	int rs;

	if (n > 0)
	{
		_putchar('+');
		rs = 1;
	} else if (n == 0)
	{
		_putchar('0');
		rs = 0;
	} else if (n < 0)
	{
		_putchar('-');
		rs = -1;
	}
	return (rs);
}
