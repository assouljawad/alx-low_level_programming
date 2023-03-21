#include "main.h"
/**
 * print_last_digit - print the last digit of the number.
 * @n: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int print_last_digit(int n)
{
	int rs;
	rs = n % 10;
	if (rs < 0)
	{
		rs = rs * (-1);
	}
	_putchar('0' + rs);
	return (rs);
}
