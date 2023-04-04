#include "main.h"
/**
 * _strchr - prints buffer in hexa
 * @s: the string
 * @c: the address of memory to print
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
