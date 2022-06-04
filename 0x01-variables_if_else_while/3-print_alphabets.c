#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints lowercase alphabets
 *
 * Return: return 0
 */
int main(void)
{
	/* Declaration */
	char ch;

	/* STatement */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
