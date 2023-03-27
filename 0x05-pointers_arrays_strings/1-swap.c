#include "main.h"
/**
* swap_int  - a poniter to int as argument an change its value.
* @a: holdes the pointer a
* @b: holdes the pointer b
* Return: return 0
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
