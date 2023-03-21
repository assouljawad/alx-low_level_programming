#include "main.h"
/**
 * _isalpha - Checks if a character is letter.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
	int rs;

	if (c <= 122 && c >= 97 && c <= 90 && c >= 65)
	{
		rs = 1;
	} else
	{
		rs = 0;
	}
	return (rs);
}
