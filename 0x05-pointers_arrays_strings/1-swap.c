/**
 * swap_int - function to swap values of integers
 * @a: int parameter to swap
 * @b: int parameter to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
