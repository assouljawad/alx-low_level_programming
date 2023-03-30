#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: n byte.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;
	char *p;

	i = 0;
	dest_len  = 0;

	while (dest[i] != '\0' && n--)
	{
		dest_len++;
		i++;
	}
	p = dest + dest_len;
	while (*src != *src + n)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
