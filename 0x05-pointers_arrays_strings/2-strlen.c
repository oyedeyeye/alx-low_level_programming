/**
 *_strlen - function to output the length of a string
 * @s: an array of string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
