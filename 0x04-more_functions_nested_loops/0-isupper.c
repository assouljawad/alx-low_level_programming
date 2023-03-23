#include <stdio.h>
#include "main.h"

/**
*_isupper - checks if the c is uppercase
*@c: is holding the c value
*Return: returing the c value
*/

int _isupper(int c)
{
	int rs;

	if (c >= 65 && c <= 90)
	{
		rs = 1;
	} else
	{
		rs = 0;
	};
	return (rs);
}
