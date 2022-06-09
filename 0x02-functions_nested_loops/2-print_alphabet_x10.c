#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int count = 1;

	while (count <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		count++;
	}
}
