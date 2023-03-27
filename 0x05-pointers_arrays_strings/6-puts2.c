#include "main.h"
/**
* puts2  - a poniter to int as argument an change its value.
* @str: poniter
* Return: no return
*/
void puts2(char *str)
{
	int i, j, len;

	len = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
