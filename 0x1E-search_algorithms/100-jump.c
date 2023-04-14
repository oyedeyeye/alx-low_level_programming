#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 *               the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located or -1 if value is not present
 *         in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, i, prev;

	if (!array)
		return (-1);

	jump = sqrt(size);
	prev = 0;
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (prev >= size)
			break;
		prev += jump;
	}
	i = prev - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", i, prev);

	for (; i <= prev && i < size; i += 1)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
