#include "main.h"
/**
* _print_rev_recursion - prints string using recursion func
* @s: string
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	} else if (*s == '\0')
	{
		_putchar('\n');
	}
}
