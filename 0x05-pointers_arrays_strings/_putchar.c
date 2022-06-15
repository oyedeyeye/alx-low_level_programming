#include <unistd.h>

/**
 * _putchar - function to print character
 * @c: character input
 *
 * Return: character if successful
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
