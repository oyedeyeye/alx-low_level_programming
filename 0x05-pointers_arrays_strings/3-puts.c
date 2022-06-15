#include "main.h"
/**
 * _puts -function to print string
 * @str: string data type
 *
 * Return: nothing
 */
void _puts(char *str)
{
        int i;

        for (i = 0; *str != '\0'; ++str)
        {
                _putchar(*str + 0);
                i++;
        }
        _putchar("\n");
}
