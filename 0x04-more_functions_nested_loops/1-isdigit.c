#include "main.h"
/**
* _isdigit - is functions that checks is the c is digit.
* @c: holdes the num value
* Return: if digit return 1 else return 0
*/

int _isdigit(int c)
{
	int rs;

	if (c >= 48 && c <= 57)
	{
		rs = 1;
	} else
	{
		rs = 0;
	}
	return (rs);
}
