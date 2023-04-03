#include "main.h"
/**
 * _memset - prints buffer in hexa
 * @s: the string
 * @b: the address of memory to print
 * @n: the size of the memory to print
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
}
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
