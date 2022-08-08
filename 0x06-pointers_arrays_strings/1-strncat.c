#include "main.h"
/**
 * _strncat - function name
 * @dest: pointer argument
 * @src: pointer argument
 * @n: integer argument
 * Description: concatenates two strings
 * Return: return pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len += 1;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
