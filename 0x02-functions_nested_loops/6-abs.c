#include "main.h"

/**
 * _abs - create absolute function
 * @n: integer n
 *
 * Return: absolutely value if negative
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
