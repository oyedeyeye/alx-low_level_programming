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
	char ch, p;

	/* Statement */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar(p'\n');
	}
	return (0);
}

