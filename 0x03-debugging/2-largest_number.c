 #include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer parameter
 * @b: second integer parameter
 * @c: third integer parameter
 * Description: returns the largest number of 3 integers
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
