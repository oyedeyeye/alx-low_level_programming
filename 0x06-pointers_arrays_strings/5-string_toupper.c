#include "main.h"
/**
 * string_toupper - function pointer
 * @s: pointer to char argument
 * Description: convert character to uppercase
 * Return: the uppercase character
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
