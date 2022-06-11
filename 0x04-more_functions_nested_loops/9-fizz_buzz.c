#include "main.h"

/**
 * main - print fizz buzz for multiple of 3 and 5
 * Description: Prints fizz buzz
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
