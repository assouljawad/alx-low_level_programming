#include "main.h"
/**
* _puts  - a poniter to int as argument an change its value.
* @str: poniter
* Return: return the lenght of string
*/
void  _puts(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
