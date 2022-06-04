#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints alphabets except q and e
 *
 * Return: return 0
 */
int main(void)
{
	/* Declaration */
	char ch;

	/* Statement */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
