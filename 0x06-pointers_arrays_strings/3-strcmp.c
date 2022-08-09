#include "main.h"
/**
 * _strcmp - function name
 * @s1: pointer argument
 * @s2: pointer argument
 * Description: compare two string
 * Return: return equality (0) greater than or less than zero
 */
int _strcmp(char *s1, char *s2)
{
	/**
	 * int i = 0, d;
	 * while (s1[i] != '\0' && s2[i] != '\0')
	 * {
	 * if (s1[i] != s2[i])
	 * d = s1[i] - s2[i];
	 * else
	 * d = s1[i] - s2[i];
	 * i++;
	 * }
	*/
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
