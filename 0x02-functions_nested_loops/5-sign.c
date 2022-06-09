#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: integer input
 *
 * Return: 1 is printed if program runs succesfully
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
