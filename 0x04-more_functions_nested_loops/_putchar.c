#include <unistd.h>

/**
 * _putchar - print to the standard output
 * @c: char input
 *
 * Return: printed item
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
