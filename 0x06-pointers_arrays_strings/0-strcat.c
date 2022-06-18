#include <string.h>
#include <stdlib.h>
/**
 * _strcat function - concatenate strings data type
 * @dest: pointer parameter
 * @src: pointer parameter
 *
 * Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(src);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (des)t;
}
