#include "main.h"

/**
 * Print_alphabet_x10
 * Description: Prints alphabets in lower case 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char i;
	int count = 1;

	while (count <= 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		count++
	}
}
