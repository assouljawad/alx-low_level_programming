#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int rs;

	if (c <= 122 && c >= 97)
	{
		rs = 1;
	} else
	{
		rs = 0;
	}
	return (rs);
}
