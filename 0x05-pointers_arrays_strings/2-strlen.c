#include "main.h"
/**
* _strlen  - a poniter to int as argument an change its value.
* @s: poniter
* Return: return the lenght of string
*/
int  _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
