#include "main.h"

/**
 * main - program entry point
 * Description : program to print _putchar to console
 * Return: Always 0 (Success)
 */
int main void(void)
{
	char putcharStr[] = "_putchar";
	int lengthOfStr;
	int i;

	lengthOfStr = sizeof(putcharStr) /sizeof(putcharStr[0]);
	for(i = 0; i < lengthOfStr; i += 1)
	{
		_putchar(putcharStr[i]);
	}
	_putchar("\n");

	return (0);
}
