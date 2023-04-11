#include "main.h"
#include <stdlib.h>
/**
* *create_array - creat an arry of characters
* @size: size of the arry
* @c: the character
* Return: return pointer to first address of the array
*/
char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
