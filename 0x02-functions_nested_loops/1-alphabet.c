#include "main.h"

/**
 * Print_alphabet - Name of function
 * Description: Prints alphabets in lower case
 * Return: 0 if the program runs successfully
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i += 1)
	{
		_putchar(i);
	}
	_putchar('\n');
}
