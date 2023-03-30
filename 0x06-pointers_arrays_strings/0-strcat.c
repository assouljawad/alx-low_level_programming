#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len;
	char *p;

	i = 0;
	dest_len  = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}
	p = dest + dest_len;
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
