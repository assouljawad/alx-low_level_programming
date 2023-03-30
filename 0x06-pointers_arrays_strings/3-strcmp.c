#include "main.h"
/**
 * _strcmp - comp a string
 * @s1: destination.
 * @s2: source.
 * Return: the pointer to dest.
 */

int _strcmp(char *s1, char *s2)
{
	int i, rs;

	i = 0;
	rs = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			rs = (s1[i] - s2[i]);
			break;
		}
		else
		{
			rs = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	return (rs);
}
