#include "main.h"

/**
 * print_alphabet - Prints alphabets in lower case
 * Return: 0 if the program runs successfully
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c += 1)
	{
		_putchar(c);
	}
	_putchar('\n');
}
