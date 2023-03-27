#include "main.h"
/**
* _puts  - a poniter to int as argument an change its value.
* @str: poniter
* Return: return the lenght of string
*/
void  _puts(char *str)
{
	int i, j, len;

	len = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
