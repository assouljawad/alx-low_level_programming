#include "main.h"
/**
 * _strchr - prints buffer in hexa
 * @s: the string
 * @c: the address of memory to print
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i, len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i++)
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	}
	if (s[i] == '\0')
	{
		return (NULL);
	}
}
