/**
 * _strlen - returns the length of a string
 *
 * @s: the string to calculate it's length
 * Return: the string length
 */
int _strlen(char *s)
{
	int str_length = 0;

	while (*s != '\0')
	{
		str_length++;
	}
	return (str_length);
}
