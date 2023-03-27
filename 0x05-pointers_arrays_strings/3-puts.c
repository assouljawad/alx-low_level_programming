#include "main.h"
/**
* _puts  - a poniter to int as argument an change its value.
* @str: poniter
* Return: return the lenght of string
*/
void  _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
