#include "main.h"
/**
* puts_half  - a poniter to int as argument an change its value.
* @str: poniter
* Return: no return
*/
void puts_half(char *str)
{
	int i, j, len, rem;

	len = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}
	rem = len;
	if (len % 2 != 0)
	{
		len = (len - 1) / 2;
	}
	else
	{
		len = len / 2;
	}
	for (i = len; i < rem; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
