#include "main.h"
/**
 * reverse_array - function name
 * @a: pointer argument
 * @n: integer argument
 * Description: reverses the content of an array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, l, t;

	l = n - 1;
	i = 0;

	while (i < l)
	{
		t = a[i];
		a[i] = a[l];
		a[l] = t;
		i++;
		l--;
	}
}
