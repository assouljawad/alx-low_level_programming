#include "main.h"
#include <stdlib.h>
/**
* *_strdup - cp string new memorey
* @str: string
* Return: point to the first address of new string
*/
char *_strdup(char *str)
{
	int i, j, len;
	char *p;

	j = 0;
	len = 0;
	while (str[j] != '\0')
	{
		len++;
		j++;
	}
	if (len == 0)
		return (NULL);
	p = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
