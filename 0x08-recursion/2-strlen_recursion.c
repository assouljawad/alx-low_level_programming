#include "main.h"
/**
* _strlen_recursion - returns the lenght
* @s: string
* Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}
