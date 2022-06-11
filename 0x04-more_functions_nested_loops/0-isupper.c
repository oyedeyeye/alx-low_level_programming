#include "main.h"

/**
 * _isupper - uppercase checker
 * @c: takes an input of character c
 *
 * Return: returns 1 if character is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
