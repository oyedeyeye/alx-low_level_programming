#include "main.h"
/**
 * print_rev - prints a string
 * @s: pointer to string argument
 * Return: nothing
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	while (--l >= 0)
		_putchar(s[l]);
	_putchar('\n');
}
