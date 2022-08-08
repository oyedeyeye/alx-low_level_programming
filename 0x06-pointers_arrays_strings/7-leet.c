#include "main.h"
/**
 * leet - function
 * @s: pointer argument
 * Description: encode a string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	int m[] = {65, 69, 79, 84, 76};
	int n[] = {97, 101, 111, 116, 108};
	int r[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j += 1)
		{
			if (s[i] == m[j] || s[i] == n[j])
			{
				s[i] = r[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
