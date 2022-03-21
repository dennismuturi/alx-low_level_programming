/**
 * _strlen - a function that returns the length of a string
 * @s: a string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (s != '\0')
	{
		str_len++;
	}
	return (str_len);
}
