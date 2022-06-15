/**
 * _strcpy - copies a string from one pointer to another
 * @dest: first args
 * @src: second args
 *
 * Return: returns char pointer;
 */

char *_strcpy(char *dest, char *src)
{
        int a, b = 0;

        for (a = 0; src[a] != '\0'; ++a)
        {
                dest[b] = src[a];
                ++b;
        }
        dest[b] = '\0';

        return (dest);
}
