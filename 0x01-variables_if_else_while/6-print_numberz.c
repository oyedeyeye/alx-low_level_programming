#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  a program that prints numbers using putchar
 *
 * Return: return 0
 */
int main(void)
{
	/* Declaration */
	int ch;

	/* statements */
	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');
	return (0);
}
