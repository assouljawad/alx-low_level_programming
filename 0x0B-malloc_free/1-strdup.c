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

	j = 0;
	len = 0;
	if (*str == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		len++;
		j++;
	}
	char *p = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
