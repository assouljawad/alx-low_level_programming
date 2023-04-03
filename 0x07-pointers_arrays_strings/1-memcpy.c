#include "main.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: the string
 * @src: the address of memory to print
 * @n: the size of the memory to print
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (dest[i] == '\0' && n--)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
