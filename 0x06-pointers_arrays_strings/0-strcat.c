#include "main.h"
/**
 * _strcat - function name
 * @dest: pointer argument
 * @src: pointer argument
 * Description: concatenates two strings
 * Return: return pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len += 1;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
