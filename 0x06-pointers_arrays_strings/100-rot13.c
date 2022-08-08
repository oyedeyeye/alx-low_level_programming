#include "main.h"
/**
 * rot13 - function name
 * @s: pointer argument
 * Description: letter substitution cipher
 * Return: encoded string
 */
char *rot13(char *s)
{
	char alpha[52] = {'A', 'B', 'C', 'D', 'E',
			  'F', 'G', 'H', 'I', 'J',
			  'K', 'L', 'M', 'N', 'O',
			  'P', 'Q', 'R', 'S', 'T',
			  'U', 'V', 'W', 'X', 'Y',
			  'Z', 'a', 'b', 'c', 'd', 'e',
			  'f', 'g', 'h', 'i', 'j',
			  'k', 'l', 'm', 'n', 'o',
			  'p', 'q', 'r', 's', 't',
			  'u', 'v', 'w', 'x', 'y',
			  'z'};
	char rot13[52] = {'N', 'O',
			  'P', 'Q', 'R', 'S', 'T',
			  'U', 'V', 'W', 'X', 'Y',
			  'Z', 'A', 'B', 'C', 'D', 'E',
			  'F', 'G', 'H', 'I', 'J',
			  'K', 'L', 'M', 'n', 'o',
			  'p', 'q', 'r', 's', 't',
			  'u', 'v', 'w', 'x', 'y',
			  'z', 'a', 'b', 'c', 'd', 'e',
			  'f', 'g', 'h', 'i', 'j',
			  'k', 'l', 'm'};
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j += 1)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
