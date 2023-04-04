#include "main.h"
/**
 * _strchr - prints buffer in hexa
 * @s: the string
 * @c: the address of memory to print
 * Return: s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < len; i++)
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	}
	return (NULL);
}
