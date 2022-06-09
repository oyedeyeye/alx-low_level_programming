#include "main.h"

/**
 * _islower - checks if an int is lower
 * @c: integer character
 *
 * Return: returns 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
