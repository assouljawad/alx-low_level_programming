#include "main.h"
/**
 * _strcmp - comp a string
 * @s1: destination.
 * @s2: source.
 * Return: the pointer to dest.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
}
