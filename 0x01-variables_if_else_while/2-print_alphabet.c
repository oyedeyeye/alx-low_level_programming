#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the lowercase and uppercase alphabets
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
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

