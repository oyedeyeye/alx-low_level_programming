#include "main.h"
/**
 * _strncpy - function name
 * @dest: pointer argument
 * @src: pointer argument
 * @n: integer argument
 * Description: copy a string into another
 * Return: return pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
