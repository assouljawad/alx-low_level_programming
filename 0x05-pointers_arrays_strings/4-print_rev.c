#include "main.h"
/**
* print_rev  - a poniter to int as argument an change its value.
* @s: poniter
* Return: return the lenght of string
*/
void print_rev(char *s)
{
	int i, j, len;

	len = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
